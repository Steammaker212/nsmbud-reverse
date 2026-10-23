/* SE_SYS_STOCK_ITEM_USE_ref_2
 * address: 0x606C728C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_SYS_STOCK_ITEM_USE_ref_2(int a1)
{
  int v3; // r0
  _WORD *v4; // r5
  __int16 v5; // r0
  int v6; // r1
  _DWORD *v7; // r6
  int v8; // t1
  __int64 v9; // r2
  unsigned int v10; // r0
  int v11; // r3
  unsigned int v12; // r1
  int v13; // r2
  int v14; // r4
  __int64 v15; // r8
  void (__fastcall *v16)(int, int *); // r2

  v4 = (_WORD *)(a1 + 7090);
  v3 = FIELD_U16(a1, 7090);
  if ( v3 )
  {
    v5 = v3 - 1;
    *v4 = v5;
  }
  else
  {
    v5 = 0;
  }
  v8 = FIELD_U32(a1, 7176);
  v7 = (_DWORD *)(a1 + 7176);
  v6 = v8;
  if ( v8 != 1 )
  {
    if ( !v6 )
    {
      CollisionActor__handleGravity((CollisionActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      if ( FIELD_F32(a1, 124) <= -1.5 )
      {
        *v4 = 8;
        *v7 = 1;
      }
      return;
    }
    if ( v5 )
      return;
    if ( !FIELD_U8(dword_60C9A1F0, 6515) )
    {
      sub_60807EF0(SoundSystem_instance, "SE_SYS_STOCK_ITEM_USE", 0, 1);
      sub_606C8974(a1);
    }
    if ( (FIELD_U8(a1, 22) & 0x10) == 0 )
    {
LABEL_24:
      FIELD_U8(a1, 19) = 1;
      return;
    }
    v16 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
LABEL_27:
    v16(a1, &dword_60CBACA0);
    return;
  }
  if ( v5 )
    return;
  if ( FIELD_U16(a1, 7082) != FIELD_U32(a1, 7068) )
  {
    if ( (FIELD_U8(a1, 22) & 0x10) == 0 )
      goto LABEL_24;
    v16 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    goto LABEL_27;
  }
  v9 = FIELD_U64(EventMgr__instance, 16)
     & sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  if ( v9 )
  {
    v10 = sub_6072A66C(EventMgr__instance, v9 | HIDWORD(v9), v9);
    if ( v10 != 255 )
    {
      v11 = v10 - 32;
      v12 = 1u >> (32 - v10);
      if ( (int)(v10 - 32) >= 0 )
        v12 = 1 << v11;
      v13 = 1 << v10;
      if ( v11 >= 0 )
        v13 = 0;
      v14 = EventMgr__instance;
      v15 = FIELD_U64(EventMgr__instance, 16);
      FIELD_U32(EventMgr__instance, 16) = v15 & ~v13;
      FIELD_U32(v14, 20) = HIDWORD(v15) & ~v12;
      if ( v10 >= 0x40 )
        v10 = 0;
      *(_DWORD *)(v14 + 12 * v10 + 24) = 0;
    }
  }
  *v7 = 2;
  *v4 = 20;
}
