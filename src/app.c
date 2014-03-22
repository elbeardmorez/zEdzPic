
#include <gtk/gtk.h>

int main(int argc, char **argv)
{
  GtkBuilder *builder;
  GtkWidget  *window;
  GError     *error = NULL;
  gchar name[] = "zedzpic";

  /* init GTK+ */
  gtk_init(&argc, &argv);

  /* Create new GtkBuilder object */
  builder = gtk_builder_new();
  /* load ui file */
  if(!gtk_builder_add_from_file(builder, "./src/ui.ui", &error))
  {
    g_warning("%s", error->message);
    g_free(error);
    return(1);
  }

  /* get main window pointer */
  window = GTK_WIDGET(gtk_builder_get_object(builder, "w_zedzpic"));

  /* connect signals */
  g_signal_connect(window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

  /* destroy builder */
  g_object_unref(G_OBJECT(builder));

  /* show window and start main loop */
  gtk_widget_show(window);
  gtk_main();

  return(0);
}
