/* sub_600F91D8
 * address: 0x600F91D8   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F91D8(int a1)
{
  int v2; // r5
  signed int v3; // r6
  float *v4; // r7
  unsigned int *v5; // r9
  signed int *v6; // r10
  int v7; // r4
  char v8; // r12
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v13; // [sp+4h] [bp-64h]
  _BYTE *v14; // [sp+24h] [bp-44h]

  sub_6077A260(dword_60CBFA90);
  v2 = 0;
  v3 = 0;
  FIELD_U8(dword_60C9CF0C, 1393) = 1;
  ++FIELD_U32(dword_60C99DE4, 16);
  FIELD_U32(a1, 6196) = 0;
  v13 = a1;
  v4 = (float *)(a1 + 6140);
  v14 = (_BYTE *)(a1 + 6104);
  v5 = (unsigned int *)(a1 + 6108);
  v6 = (signed int *)(a1 + 6112);
  do
  {
    if ( v3 == *v6
      || !*v14
      && PlayerMgr_hasPlayer(PlayerMgr_instance, v3) == 1
      && (v10 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32)) != 0
      && sub_6075EDF8(v10) != 1 )
    {
      v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v5);
      if ( ((unsigned int)&dword_60C7B364 & ~(1611633408 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI) == 1 )
        *v4 = FIELD_F32(v7, 108) + -32.0;
      if ( v3 != *v6 )
      {
        v9 = 0;
        if ( *v6 <= v3 )
          v9 = -1;
        *v4 = *v4 - (float)((float)((float)(v3 + v9 - v2) * 24.0) + 80.0);
      }
    }
    else
    {
      ++v2;
    }
    ++v3;
    ++v4;
  }
  while ( v3 != 4 );
  v11 = dword_60CC6484;
  FIELD_U32(v13, 6116) = FIELD_U32(dword_60CC6484, 112);
  FIELD_U32(v13, 6120) = FIELD_U32(v11, 124);
  FIELD_U32(v13, 6192) = 180;
  FIELD_U8(v13, 6202) = 0;
  return 6202;
}
