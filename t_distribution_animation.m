% 定义自由度的范围
df_range = 1:1:101;

% 定义横坐标范围
x = -4:0.001:4;

% 创建动画对象
fig = figure;
axis tight manual;
filename = 't_distribution_animation.gif';

% 生成动图
for i = 1:length(df_range)
    df = df_range(i);
    y_t = tpdf(x, df);
    
    % 绘制图像
    plot(x, y_t, 'LineWidth', 1.5);
    hold on;
    y_norm = normpdf(x, 0, 1);
    plot(x, y_norm, 'r--', 'LineWidth', 2);
    hold off;
    
    % 添加图例
    legend(sprintf('t分布 (n=%d)', df), '标准正态分布');
    
    % 添加标题和坐标轴标签
    title(sprintf('t分布与标准正态分布的比较 (n=%d)', df));
    xlabel('x');
    ylabel('Probability Density');
    
    % 添加网格线
    grid on;
    
    % 设置坐标轴范围
    xlim([-4 4]);
    ylim([0 0.45]);
    
    % 生成动画帧
    drawnow;
    
    % 保存帧到GIF文件
    frame = getframe(fig);
    im = frame2im(frame);
    [imind, cm] = rgb2ind(im, 4096);
    if i == 1
        imwrite(imind, cm, filename, 'gif', 'Loopcount', inf);
    else
        imwrite(imind, cm, filename, 'gif', 'WriteMode', 'append', 'DelayTime', 0.1);
    end
end
