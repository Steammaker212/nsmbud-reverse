/* sub_601919B0
 * address: 0x601919B0   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601919B0(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r1
  _DWORD *v5; // r3

  result = 0;
  if ( a1[324] )
  {
    v4 = FIELD_U32(a2, 8);
    v5 = a1 + 326;
    if ( a1[326] == v4 )
      goto LABEL_20;
    v5 = a1 + 327;
    if ( a1[327] == v4 )
      goto LABEL_20;
    v5 = a1 + 328;
    if ( a1[328] == v4 )
      goto LABEL_20;
    v5 = a1 + 329;
    if ( a1[329] == v4 )
      goto LABEL_20;
    v5 = a1 + 330;
    if ( a1[330] == v4 )
      goto LABEL_20;
    v5 = a1 + 331;
    if ( a1[331] == v4 )
      goto LABEL_20;
    v5 = a1 + 332;
    if ( a1[332] == v4 )
      goto LABEL_20;
    v5 = a1 + 333;
    if ( a1[333] == v4 )
      goto LABEL_20;
    v5 = a1 + 334;
    if ( a1[334] == v4 )
      goto LABEL_20;
    v5 = a1 + 335;
    if ( a1[335] == v4 )
      goto LABEL_20;
    v5 = a1 + 336;
    if ( a1[336] == v4
      || (v5 = a1 + 337, a1[337] == v4)
      || (v5 = a1 + 338, a1[338] == v4)
      || (v5 = a1 + 339, a1[339] == v4)
      || (v5 = a1 + 340, a1[340] == v4)
      || (v5 = a1 + 341, a1[341] == v4)
      || (v5 = a1 + 342, a1[342] == v4)
      || (v5 = a1 + 343, a1[343] == v4) )
    {
LABEL_20:
      *v5 = dword_60C89970;
      return 1;
    }
  }
  return result;
}
