/* sub_600D6EC4
 * address: 0x600D6EC4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D6EC4(int a1)
{
  _DWORD *v2; // r6
  int result; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // t1
  int ResArchiveById; // r0
  int v7; // r1
  unsigned int v8; // r0
  int *v9; // r1
  unsigned int v10; // r0

  v2 = (_DWORD *)(a1 + 7104);
  result = **(unsigned __int8 **)(FIELD_U32(a1, 7104) + 12);
  if ( result )
  {
    v5 = *(_DWORD **)(a1 + 7096);
    v4 = (_DWORD *)(a1 + 7096);
    ResArchiveById = Profile__getResArchiveById((Profile *)*(v4 - 1771), 0);
    sub_60421938(v5, ResArchiveById, *v2 + 8);
    v7 = *(_DWORD *)(*v4 + 12);
    v8 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 1);
    v9 = *(int **)(*v4 + 12);
    v10 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v10 )
      v9 += v10;
    result = *v9;
    *(_DWORD *)(*v9 + 24) = v4[166];
  }
  return result;
}
