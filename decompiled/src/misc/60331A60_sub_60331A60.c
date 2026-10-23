/* sub_60331A60
 * address: 0x60331A60   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60331A60(int a1)
{
  _BYTE *v2; // r7
  _DWORD *v3; // r6
  int v4; // r5
  int v5; // r0
  bool v6; // zf
  int v7; // r5
  int v8; // r8
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r5
  int v14; // r5
  int v15; // r0
  __int16 v16; // r1

  v2 = (_BYTE *)(a1 + 6994);
  v3 = (_DWORD *)(a1 + 6096);
  if ( FIELD_U8(a1, 6994) != 1 )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
    v5 = (*(int (**)(void))(dword_60C93FE8 + 8))();
    v6 = v4 == v5;
    if ( v4 != v5 )
      v6 = *v2 == 0;
    if ( !v6 )
    {
      v7 = a1 + 6336;
      v8 = FIELD_U32(a1, 6972);
      sub_60421938(*(_DWORD **)(a1 + 6336), FIELD_U32(a1, 6340), (int)&dword_60C93EF8);
      v9 = *(_DWORD *)(FIELD_U32(a1, 6336) + 12);
      v10 = *(_DWORD *)(FIELD_U32(a1, 6336) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 6336) + 8) > v10 )
        v9 += 4 * v10;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 1);
      v11 = *(_DWORD *)(*(_DWORD *)v7 + 12);
      v12 = *(_DWORD *)(*(_DWORD *)v7 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v12 )
        v11 += 4 * v12;
      *(_DWORD *)(*(_DWORD *)v11 + 24) = v8;
      *v2 = 0;
    }
  }
  v13 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
  if ( v13 == (*(int (**)(void))(dword_60C93FE8 + 8))() )
  {
    FIELD_U32(a1, 6300) = 2;
    FIELD_U16(a1, 6988) = 30;
    if ( FIELD_U8(a1, 6997) == 1 )
      FIELD_U8(a1, 7003) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0x80000000) != 0;
  }
  else
  {
    v14 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
    v15 = (*(int (**)(void))(dword_60C93FA8 + 8))();
    v16 = 30;
    if ( v14 == v15 )
    {
      FIELD_U32(a1, 6300) = 0;
      v16 = 15;
    }
    FIELD_U16(a1, 6988) = v16;
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return 0;
}
