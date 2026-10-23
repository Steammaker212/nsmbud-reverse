/* PlayerStates_loadModelResources_helper_872A2C
 * address: 0x60872A2C   size: 152   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall PlayerStates_loadModelResources_helper_872A2C(int *result)
{
  int v1; // lr
  unsigned int v2; // r2

  v1 = *result;
  result[4] = 44;
  result[5] = 8;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = 8;
  result[10] = 0;
  result[11] = -1;
  v2 = 0;
  if ( *((_BYTE *)result + 5) )
  {
    v2 = 0;
    if ( *((_BYTE *)result + 4) )
      v2 = (12 * v1 + 7) & 0xFFFFFFF8;
  }
  result[7] = 0;
  result[8] = v2;
  result[3] = 8;
  result[2] = 44;
  if ( v2 )
  {
    result[11] = 48;
    result[3] = 8;
    result[2] = v2 + 48;
  }
  return result;
}
