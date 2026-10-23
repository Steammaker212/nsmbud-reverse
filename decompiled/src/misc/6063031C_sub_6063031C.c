/* sub_6063031C
 * address: 0x6063031C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063031C(_DWORD *a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  int v14; // r7
  int v15; // r7
  int v16; // r5
  int result; // r0

  while ( ((int (__fastcall *)(_DWORD *, int, int, int, float, float))loc_60630468)(a1, a2, a3, a4, a5, a7) != 1 )
    ;
  v14 = **(_DWORD **)(*a1 + 20);
  TexAnim_play(v14, a3, (_DWORD *)(a4 + 36));
  FIELD_F32(v14, 20) = a6;
  FIELD_U32(v14, 28) |= 2u;
  v15 = **(_DWORD **)(a1[1] + 20);
  TexAnim_play(v15, a3, (_DWORD *)(a4 + 44));
  FIELD_F32(v15, 20) = a6;
  FIELD_U32(v15, 28) |= 2u;
  v16 = **(_DWORD **)(a1[2] + 20);
  TexAnim_play(v16, a3, (_DWORD *)(a4 + 36));
  FIELD_F32(v16, 20) = a6;
  result = FIELD_U32(v16, 28) | 2;
  FIELD_U32(v16, 28) = result;
  return result;
}
