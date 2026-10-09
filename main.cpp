import subprocess
import pandas as pd
from io import StringIO

# Menjalankan program C++
result = subprocess.run(
    ["./main"],
    capture_output=True,
    text=True,
    check=True
)

# Membaca output program C++
data = pd.read_csv(StringIO(result.stdout))

# Membuat file Excel
data.to_excel("hasil.xlsx", index=False)

print("Berhasil membuat file hasil.xlsx")
```
