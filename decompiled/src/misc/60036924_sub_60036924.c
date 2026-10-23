/* sub_60036924
 * address: 0x60036924   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60036924(int a1)
{
  unsigned int v2; // r0
  int v3; // r1

  v2 = sub_6000F7B8(
         *(float *)(FIELD_U32(a1, 7912) + 7628) - FIELD_F32(a1, 7136),
         sqrtf(
           (float)((float)(*(float *)(FIELD_U32(a1, 7912) + 7624) - FIELD_F32(a1, 7132))
                 * (float)(*(float *)(FIELD_U32(a1, 7912) + 7624) - FIELD_F32(a1, 7132)))
         + 0.0));
  FIELD_U32(a1, 7128) = v2;
  v3 = 238609294;
  if ( v2 - FIELD_U32(a1, 164) - *(_DWORD *)(FIELD_U32(a1, 7244) + 164) < 0xF1C71C72 )
    v3 = -238609294;
  FIELD_U32(a1, 7128) = v3;
  return sub_600CE584(a1);
}
