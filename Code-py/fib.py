import os
import pandas as pd
dir =os.listdir(path="H:\side\疏水")
#print(len(dir),dir)
chunks = [line.split("-") for line in dir]
#print(chunks)
print(len(chunks))

df = pd.DataFrame(chunks)
df.to_excel("output_pandas.xlsx", index=False, header=False)