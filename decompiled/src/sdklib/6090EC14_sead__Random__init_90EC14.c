/* sead__Random__init_90EC14
 * address: 0x6090EC14   size: 60   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int *__fastcall sead__Random__init_90EC14(
        signed int *result,
        signed int a2,
        signed int a3,
        signed int a4,
        signed int a5)
{
  signed int v5; // lr

  v5 = a5;
  if ( !(a3 | a2 | a4 | a5) )
  {
    a3 = 1812433255;
    a4 = 1900727105;
    a2 = 1;
    v5 = 1208447044;
  }
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = v5;
  return result;
}
