
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

gboolean ze_key_press(GtkWidget *widget, GdkEventKey *ev, gpointer data) {

  if (ev->type == GDK_KEY_PRESS) {

    char skey[100];
    skey[0] = '\0';
    if (ev->state & GDK_CONTROL_MASK)
      strcat(skey, "C-");
    if (ev->state & GDK_MOD1_MASK)
      strcat(skey, "M-");
    if (ev->state & GDK_SHIFT_MASK)
      strcat(skey, "S-");

    strcat(skey, gdk_keyval_name(ev->keyval));
    printf("[debug|ze_key_press] pressed: '%s'\n", skey);

    if (ev->state & GDK_CONTROL_MASK) {
      switch (ev->keyval) {
        case GDK_KEY_l:
          printf("[debug|ze_key_press] logging toggled\n");
          break;
        case GDK_KEY_Return:
        case GDK_KEY_ISO_Enter:
        case GDK_KEY_KP_Enter:
          printf("[debug|ze_key_press] inspiration toggled\n");
          break;
      }
    }
    return FALSE;
  }
  return TRUE;
}
