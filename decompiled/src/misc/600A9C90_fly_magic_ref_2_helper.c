/* fly_magic_ref_2_helper
 * address: 0x600A9C90   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall fly_magic_ref_2_helper(_DWORD *a1)
{
  unsigned int result; // r0
  _DWORD *v3; // r1
  _DWORD *v4; // r4
  int v5; // r0
  char v6; // r12
  _DWORD *v7; // r2
  _DWORD *v8; // r3
  int *v9; // r6
  int *v10; // r5
  int v11; // r8
  int v12; // r4
  int v13; // r4
  unsigned int v14; // r10
  int v15; // r8
  _DWORD *v16; // r5
  void *v17; // r0
  unsigned int v18; // [sp+10h] [bp-28h]

  result = a1[2172];
  if ( result )
  {
    v4 = a1 + 4953;
    v3 = (_DWORD *)a1[4953];
    if ( !v3 )
    {
      sub_600A7B70(a1);
      if ( (int)a1[4901] < 1 )
        v3 = 0;
      else
        v3 = (_DWORD *)a1[4900];
      if ( v3 )
        --v3;
      *v4 = v3;
    }
    v5 = sub_608DE61C(a1 + 2170, *v3);
    if ( v5 )
      v5 -= 664;
    a1[4864] = v5;
    v7 = *(_DWORD **)(*v4 + 8);
    v8 = v7 - 1;
    if ( v7 == a1 + 4899 )
      v8 = 0;
    *v4 = v8;
    v18 = FIELD_U32(v5, 8);
    v9 = *(int **)(ActorMgr__instance + 27172);
    v10 = *(int **)(ActorMgr__instance + 27180);
    if ( v9 == v10 )
      goto LABEL_40;
    v11 = 0;
    do
    {
      v12 = *v9;
      if ( ((unsigned int)&dword_60C7B364 & ~(1611308464 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v12 && (**(int (__fastcall ***)(int, int *))v12)(v12, &StageActor_RTTI) == 1 && FIELD_U8(v12, 533) == 3 )
        ++v11;
      ++v9;
    }
    while ( v10 != v9 );
    v13 = 0;
    if ( v11 < 20 )
    {
LABEL_40:
      if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1) )
      {
        v13 = 2;
      }
      else
      {
        v13 = 4;
        if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 720))(a1) == 1 )
          v13 = 2;
      }
    }
    v14 = v18;
    v15 = 0;
    v16 = a1 + 4866;
    result = 0xBB8A94u;
    while ( !v13 )
    {
      v13 = 0;
      v16[v15] = 0;
LABEL_37:
      ++v15;
      --v14;
      if ( v15 == 32 )
        return result;
    }
    v17 = (void *)(dword_60C9CF0C + 1340);
    if ( v15 < (int)(v18 - v13) )
    {
      if ( (sead__Random__getU32(v17) * (unsigned __int64)v14) >> 32 >= (unsigned int)v13 )
      {
        result = 0;
        goto LABEL_36;
      }
      v17 = (void *)(dword_60C9CF0C + 1340);
    }
    --v13;
    result = ((7 * (unsigned __int64)sead__Random__getU32(v17)) >> 32) + 1;
LABEL_36:
    v16[v15] = result;
    goto LABEL_37;
  }
  return result;
}
