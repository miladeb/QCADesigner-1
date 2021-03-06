//////////////////////////////////////////////////////////
// QCADesigner                                          //
// Copyright 2002 Konrad Walus                          //
// All Rights Reserved                                  //
// Author: Konrad Walus                                 //
// Email: qcadesigner@gmail.com                         //
// WEB: http://qcadesigner.ca/                          //
//////////////////////////////////////////////////////////
//******************************************************//
//*********** PLEASE DO NOT REFORMAT THIS CODE *********//
//******************************************************//
// If your editor wraps long lines disable it or don't  //
// save the core files that way. Any independent files  //
// you generate format as you wish.                     //
//////////////////////////////////////////////////////////
// Please use complete names in variables and fucntions //
// This will reduce ramp up time for new people trying  //
// to contribute to the project.                        //
//////////////////////////////////////////////////////////
// Contents:                                            //
//                                                      //
// Header file for the open/save functions.             //
//                                                      //
//////////////////////////////////////////////////////////

#ifndef _FILEIO_H_
#define _FILEIO_H_

#ifdef STDIO_FILEIO

#include "design.h"
#include "vector_table.h"
#include "coherence_vector.h"
#include "bistable_simulation.h"
#include "semi_coherent.h"
#include "ts_field_clock.h"
#include "simulation.h"

// -- Prototypes -- //
gboolean open_project_file (gchar *file_name, DESIGN **pdesign) ;
gboolean open_project_file_fp (FILE *pfile, DESIGN **pdesign) ;
gboolean check_project_file_magic_fp (FILE *pfile, double *pversion) ;
SIMULATION_OUTPUT *open_simulation_output_file (char *pszFName) ;
SIMULATION_OUTPUT *open_simulation_output_file_fp (FILE *fp) ;
coherence_OP *open_coherence_options_file (char *pszFName) ;
bistable_OP *open_bistable_options_file (char *pszFName) ;
#ifdef HAVE_FORTRAN
semi_coherent_OP *open_semi_coherent_options_file (char *pszFName) ;
ts_fc_OP *open_ts_fc_options_file (char *pszFName) ;
#endif /* HAVE_FORTRAN */
simulation_data *simulation_data_unserialize (FILE *fp) ;
gboolean create_file (gchar *file_name, DESIGN *design) ;
void create_file_fp (FILE *pfile, DESIGN *design) ;
void create_simulation_output_file (char *pszFName, SIMULATION_OUTPUT *sim_output) ;
void create_simulation_output_file_fp (FILE *pfile, SIMULATION_OUTPUT *sim_output) ;
void simulation_data_serialize (FILE *fp, simulation_data *sim_data) ;
void export_block (char *pszFName, DESIGN *design) ;
void export_block_fp (FILE *pfile, DESIGN *design) ;

/////////////////////////////////////////////////////////////////////////////////////
#endif /* def STDIO_FILEIO */
#endif /* _FILEIO_H_ */
