/* throw_st_wait_ref_99714
 * address: 0x60099714   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_st_wait_ref_99714(int a1)
{
  _DWORD *v1; // r4
  _DWORD **v2; // r0
  _DWORD *v3; // r5
  int ResArchiveById; // r0
  int v5; // r0
  int *v6; // r0
  int result; // r0

  v1 = (_DWORD *)(a1 + 7096);
  sub_60421AD4(FIELD_U32(a1, 7096));
  v2 = *(_DWORD ***)(*v1 + 28);
  if ( *(_DWORD *)(*v1 + 24) > 1u )
    ++v2;
  v3 = *v2;
  ResArchiveById = Profile__getResArchiveById((Profile *)*(v1 - 1771), 0);
  ShuAnim_play(v3, ResArchiveById, v1[4] + 32);
  v5 = *(_DWORD *)(*v1 + 28);
  if ( *(_DWORD *)(*v1 + 24) > 1u )
    v5 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v6 = *(int **)(*v1 + 28);
  if ( *(_DWORD *)(*v1 + 24) > 1u )
    ++v6;
  result = *v6;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  *(v1 - 1) = 1;
  return result;
}
