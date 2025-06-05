import queue
import random

class CafeteriaSimulator:
    def __init__(self):
        self.queue_capacity = 100
        self.self_select_capacity = 5
        self.arrival_rate = 2  # 每分钟到达的学生数
        self.selection_times = [1, 2, 3]  # 选餐所花时间的可能取值
        self.queue = queue.Queue(maxsize=self.queue_capacity)
        self.self_select_area = []
        self.total_students_served = 0
        self.total_selection_time = 0

    def simulate_one_minute(self):
        # 模拟学生到达
        for _ in range(self.arrival_rate):
            if not self.queue.full():
                self.queue.put(random.choice(self.selection_times))

        # 模拟自选区学生选餐
        for i in reversed(range(len(self.self_select_area))):
            self.self_select_area[i] -= 1
            if self.self_select_area[i] == 0:
                self.self_select_area.pop(i)

        # 将队列中的学生移入自选区
        while len(self.self_select_area) < self.self_select_capacity and not self.queue.empty():
            self.self_select_area.append(self.queue.get())

        # 统计数据
        self.total_students_served += len(self.self_select_area)
        self.total_selection_time += sum(self.self_select_area)

    def run_simulation(self, num_minutes):
        for _ in range(num_minutes):
            self.simulate_one_minute()

        average_students_served = self.total_students_served / num_minutes
        average_selection_time = self.total_selection_time / self.total_students_served
        average_waiting_students = self.queue.qsize() / num_minutes

        print(f"A档口平均每小时接待学生数: {average_students_served * 60:.2f}")
        print(f"每位学生平均花费时间选完餐: {average_selection_time:.2f}分钟")
        print(f"排队等待的人平均数: {average_waiting_students:.2f}")

# 创建模拟器对象并运行模拟
simulator = CafeteriaSimulator()
simulator.run_simulation(num_minutes=60)