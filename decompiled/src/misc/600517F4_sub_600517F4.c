/* sub_600517F4
 * address: 0x600517F4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600517F4(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // t1
  _DWORD **v7; // r0
  _DWORD *v8; // r7
  int ResArchiveById; // r0
  int v10; // r0

  v6 = FIELD_U32(a1, 7204);
  v5 = a1 + 7204;
  v7 = *(_DWORD ***)(v6 + 28);
  if ( FIELD_U32(v6, 24) > 1u )
    ++v7;
  v8 = *v7;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v5 - 7192), 0);
  ShuAnim_play(v8, ResArchiveById, a2);
  v10 = *(_DWORD *)(*(_DWORD *)v5 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 24) > 1u )
    v10 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), a3);
}
