/* mouth_1_ref_2
 * address: 0x60083C8C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mouth_1_ref_2(int a1)
{
  _DWORD *v2; // r0
  int **v3; // r6
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int, _DWORD *); // r2
  int v10; // r0
  _BYTE *v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int result; // r0
  _DWORD v15[12]; // [sp+4h] [bp-6Ch] BYREF
  ActorBuildInfo v16; // [sp+34h] [bp-3Ch] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  v3 = (int **)(a1 + 7100);
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    memset(&v16.settings2, 0, 40);
    v7 = FIELD_U8(a1, 7248);
    if ( FIELD_U8(a1, 7248) )
      v7 = 0x10000000;
    v16.settings1 = v7;
    v16.profile = Profile__get(0x2D7u);
    v16.parentId = FIELD_U32(a1, 8);
    v16.field_20 = 0;
    v8 = **v3;
    v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 84);
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "mouth_1";
    v10 = v9(v8, v15);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v3 + 108))(**v3, v10, v15);
    LODWORD(v16.position.x) = v15[3];
    LODWORD(v16.position.y) = v15[7];
    v16.position.z = *(float *)&v15[11] + -32.0;
    v11 = ActorMgr__create((void *)ActorMgr__instance, &v16, 0);
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v11 + 216))(v11);
  }
  v12 = (*v3)[3];
  v13 = (*v3)[17];
  if ( (*v3)[2] > v13 )
    v12 += 4 * v13;
  result = *(unsigned __int8 *)(*(_DWORD *)v12 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81BAC);
  return result;
}
