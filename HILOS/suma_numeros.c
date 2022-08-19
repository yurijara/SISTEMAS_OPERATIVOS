# incluir  < sys/types.h >
# include  < unistd.h >
# incluir  < stdio.h >
int  principal ()
{

   pid_t id_proceso_padre;

   puts ( " \n ==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO PADRE ==== \n " );

   id_proceso_padre= getppid ();

   printf ( " Identificador del proceso padre : %d \n " , id_proceso_padre);

   devolver  0 ;

}
