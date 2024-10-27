import matplotlib.pyplot as plt

# (replace these with your values)
execution_times_single = [12.5, 12.7]
execution_time_multi = 6.3

labels = ['Single-Threaded (Instance 1)', 'Single-Threaded (Instance 2)', 'Multi-Threaded']
execution_times = execution_times_single + [execution_time_multi]

plt.figure(figsize=(8, 5))
plt.bar(labels, execution_times, color=['blue', 'blue', 'green'])

plt.xlabel('Program Type')
plt.ylabel('Execution Time (seconds)')
plt.title('Comparison of Execution Times: Single-Threaded vs Multi-Threaded')

for i, time in enumerate(execution_times):
    plt.text(i, time + 0.1, f'{time:.2f}', ha='center', fontsize=12)

plt.show()
