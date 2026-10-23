/* sub_603E83F8
 * address: 0x603E83F8   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E83F8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  float v4; // s16
  float v5; // r7
  int v6; // r5
  _BYTE *v7; // r6
  char v8; // r12
  unsigned int v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  float v12; // s0
  int v13; // r0
  int *v14; // r2
  float v15; // s2
  ActorBuildInfo v17; // [sp+4h] [bp-4Ch] BYREF

  v2 = a1[31];
  v3 = a1[7];
  v4 = FIELD_F32(v2, 112);
  v5 = FIELD_F32(v2, 108);
  memset(&v17.settings2, 0, 40);
  v17.settings1 = v3;
  v17.profile = Profile__get(0x1CFu);
  v17.position.x = v5;
  v6 = 0;
  v17.position.y = v4 + 8.0;
  v17.position.z = 650.0;
  v7 = ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
  if ( ((unsigned int)&dword_60C99878 & ~(1614709900 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C99878) )
  {
    dword_60C99874 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C99878);
  }
  if ( v7 )
  {
    v6 = (**(int (__fastcall ***)(_BYTE *, int *))v7)(v7, &dword_60C99874);
    if ( v6 )
      v6 = (int)v7;
  }
  a1[30] = v6;
  v9 = a1[8];
  if ( v9 >= 4 )
    v9 = 0;
  v10 = *(_DWORD *)(PlayerMgr_instance + 4 * v9 + 32);
  v11 = FIELD_U32(v10, 1320);
  v12 = FIELD_F32(v10, 112);
  v13 = FIELD_U32(v10, 108);
  if ( v11 < 8 && ((0x99u >> v11) & 1) != 0 )
  {
    v15 = flt_60AF7AE0[v11];
  }
  else
  {
    v14 = dword_603E85B0;
    if ( v11 == 8 )
      v14 = &dword_603E85B0[1];
    v15 = *(float *)v14;
  }
  FIELD_U32(v6, 6116) = v13;
  FIELD_F32(v6, 6120) = v12 + v15;
  return v6 + 6120;
}
