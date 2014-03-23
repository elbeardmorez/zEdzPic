
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>

void ze_test()
{
  printf("[debug|ze_test]\n");
  return;
}

void ze_browse(GtkWidget *widget, gpointer data) {
  printf("[debug|ze_browse]\n");
  return;
}

void ze_load(GtkWidget *widget, gpointer data) {
  printf("[debug|ze_load]\n");
  return;
}

void ze_clear(GtkWidget *widget, gpointer data) {
  printf("[debug|ze_clear]\n");
  return;
}

void ze_close(GtkWidget *widget, gpointer data) {
  printf("[debug|ze_close]\n");

  gtk_main_quit();
  return;
}
