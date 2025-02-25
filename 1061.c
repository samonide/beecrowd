#include <stdio.h>

int main() {
  int startDay, startHour, startMinute, startSecond;
  int endDay, endHour, endMinute, endSecond;
  int durationDays, durationHours, durationMinutes, durationSeconds;

  scanf("Dia %d", &startDay);
  scanf("%d : %d : %d", &startHour, &startMinute, &startSecond);

  scanf(" Dia %d", &endDay);
  scanf("%d : %d : %d", &endHour, &endMinute, &endSecond);

  int startTotalSeconds =
      startDay * 86400 + startHour * 3600 + startMinute * 60 + startSecond;
  int endTotalSeconds =
      endDay * 86400 + endHour * 3600 + endMinute * 60 + endSecond;
  int durationTotalSeconds = endTotalSeconds - startTotalSeconds;

  durationDays = durationTotalSeconds / 86400;
  durationTotalSeconds %= 86400;
  durationHours = durationTotalSeconds / 3600;
  durationTotalSeconds %= 3600;
  durationMinutes = durationTotalSeconds / 60;
  durationSeconds = durationTotalSeconds % 60;

  printf("%d dia(s)\n", durationDays);
  printf("%d hora(s)\n", durationHours);
  printf("%d minuto(s)\n", durationMinutes);
  printf("%d segundo(s)\n", durationSeconds);

  return 0;
}
