/* Iggy__vf370
 * address: 0x6009D010   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B2CFC
// 
// Overridden by: None
int __fastcall Iggy__vf370(int a1)
{
  char v2; // r12
  Actor **v3; // r6
  Actor **i; // r5
  Actor *v5; // r4
  Actor *v6; // r4
  int v7; // r1
  int v8; // r3
  unsigned int v9; // r2
  int *v10; // r3
  int v11; // r3
  int v12; // r2
  int v14; // [sp+0h] [bp-30h]

  sub_6009D1C8();
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  FIELD_U32(a1, 164) = 0;
  v14 = a1;
  FIELD_U8(a1, 8136) = 0;
  v3 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( i = *(Actor ***)(ActorMgr__instance + 27180); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611255996 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v5 )
    {
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v5, 0x0))(v5, &StageActor_RTTI) == 1
        && Actor__getProfileId(v5) == 706 )
      {
        v6 = *v3;
        if ( *v3 )
        {
          (*(void (__fastcall **)(Actor *))(FIELD_U32(v6, 0x0) + 104))(*v3);
          FIELD_U8(v6, 0x13) = 1;
        }
      }
    }
  }
  v7 = v14 + 7096;
  v8 = FIELD_U32(v14, 7096);
  v9 = FIELD_U32(v8, 24);
  v10 = *(int **)(v8 + 28);
  if ( v9 > 1 )
    ++v10;
  v11 = *v10;
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  v12 = *(_DWORD *)(*(_DWORD *)v7 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 24) > 1u )
    v12 += 4;
  *(_DWORD *)(*(_DWORD *)v12 + 24) = 0;
  return KoopalingBase__vf370();
}
