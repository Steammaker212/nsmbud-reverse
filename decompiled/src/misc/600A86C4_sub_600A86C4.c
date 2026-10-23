/* sub_600A86C4
 * address: 0x600A86C4   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A86C4(_DWORD *a1)
{
  int result; // r0
  char v3; // r12
  _DWORD *v4; // r4
  int v5; // t1
  int *v6; // r0
  int v7; // r0
  int v8; // r0
  Actor **v9; // r6
  Actor **i; // r5
  Actor *v11; // r4
  int v12; // r0
  bool v13; // zf
  _DWORD *v14; // [sp+0h] [bp-30h]

  KoopalingBase__vf36C(a1);
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    sub_600A83C0((int)a1);
    v14 = a1;
    v5 = a1[1774];
    v4 = a1 + 1774;
    v6 = *(int **)(v5 + 28);
    if ( FIELD_U32(v5, 24) > 1u )
      ++v6;
    v7 = *v6;
    FIELD_U32(v7, 20) = 0;
    FIELD_U32(v7, 28) |= 2u;
    v8 = *(_DWORD *)(*v4 + 28);
    if ( *(_DWORD *)(*v4 + 24) > 1u )
      v8 += 4;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 0;
    v9 = *(Actor ***)(ActorMgr__instance + 27180);
    for ( i = *(Actor ***)(ActorMgr__instance + 27172); v9 != i; ++i )
    {
      v11 = *i;
      if ( ((unsigned int)&dword_60C7B364 & ~(1611302888 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v11 )
      {
        v12 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v11, 0x0))(v11, &StageActor_RTTI);
        v13 = v12 == 1;
        if ( v12 == 1 )
          v13 = FIELD_U8(v11, 0x13) == 0;
        if ( v13 && Actor__getProfileId(v11) == 714 )
          (*(void (__fastcall **)(Actor *))(FIELD_U32(v11, 0x0) + 248))(v11);
      }
    }
    v14[2063] = 1065353216;
    return 8252;
  }
  return result;
}
