/* CB_victory_stand_ref
 * address: 0x60530850   size: 968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CB_victory_stand_ref(int a1)
{
  char v1; // r12
  int v3; // r8
  int Resource; // r10
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r9
  int v9; // r3
  int v10; // r0
  int v11; // r5
  int v12; // r4
  int v13; // r0
  int v14; // r9
  int v15; // r0
  int result; // r0
  int v17; // r5
  int v18; // r2
  int v19; // r6
  int v20; // r0

  if ( ((unsigned int)dword_60CAAB60 & ~(1616054380 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CAAB60) )
  {
    dword_60CAAB78 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAB7C = (int)"CB_victory_stand";
    _cxa_guard_release(dword_60CAAB60);
  }
  if ( ((unsigned int)&dword_60CAAB60[1] & ~(1616054464 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAAB60[1]) )
  {
    dword_60CAAB80 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAB84 = (int)"Model/CB_victory_stand.Nin_NX_NVN.szs";
    _cxa_guard_release(&dword_60CAAB60[1]);
  }
  if ( ((unsigned int)&dword_60CAAB60[2] & ~(1616054556 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAAB60[2]) )
  {
    dword_60CAAB88 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAB8C = (int)"CB_victory_stand";
    _cxa_guard_release(&dword_60CAAB60[2]);
  }
  v3 = 0;
  ArchiveManager_loadSzs(
    ArchiveManagerMaybe_instance,
    (sead__SafeString *)&dword_60CAAB88,
    (sead__SafeString *)&dword_60CAAB80,
    0,
    1);
  sub_6043B2D8(ResourceMgrRelated_instance, &dword_60CAAB78, (int)&dword_60CAAB88, 0);
  Resource = LoadResource(ResourceMgrRelated_instance, &dword_60CAAB78);
  v5 = dword_60C99DEC;
  v6 = FIELD_U8(dword_60C99DEC, 522);
  FIELD_U8(a1, 56) = v6;
  if ( v6 )
  {
    v7 = 0;
    if ( FIELD_U8(v5, 36) )
    {
      v3 = FIELD_U32(v5, 56);
      v7 = 0;
      if ( v3 )
        v3 = 1;
      else
        v7 = 1;
    }
    v8 = 0;
    if ( FIELD_U8(v5, 108) )
    {
      if ( FIELD_U32(v5, 128) )
      {
        ++v3;
        v8 = 1;
        v9 = 0;
      }
      else
      {
        ++v7;
        v9 = 1;
      }
    }
    else
    {
      v9 = 0;
    }
    if ( FIELD_U8(v5, 180) )
    {
      if ( FIELD_U32(v5, 200) )
      {
        ++v3;
        v8 = 2;
      }
      else
      {
        ++v7;
        v9 = 2;
      }
    }
    if ( FIELD_U8(v5, 252) )
    {
      if ( FIELD_U32(v5, 272) )
      {
        ++v3;
        v8 = 3;
      }
      else
      {
        ++v7;
        v9 = 3;
      }
    }
    LOWORD(v17) = 0;
    v18 = 2;
    FIELD_U32(a1, 60) = v7;
    v19 = 2;
    if ( v7 == 3 )
      v18 = 4;
    HIWORD(v17) = 16648;
    if ( v7 == 2 )
      v18 = 3;
    FIELD_U32(a1, 128) = v17;
    FIELD_U32(a1, 108) = v18;
    FIELD_U32(a1, 112) = v9;
    FIELD_U32(a1, 116) = 0;
    FIELD_U8(a1, 144) = 0;
    sub_60530FC4(a1 + 68, Resource, v18);
    sub_60531178(a1 + 68);
    v20 = FIELD_U32(a1, 60);
    FIELD_U32(a1, 208) = v17;
    if ( v3 == 3 )
      v19 = 4;
    if ( v3 == 2 )
      v19 = 3;
    FIELD_U32(a1, 188) = v19;
    FIELD_U32(a1, 192) = v8;
    FIELD_U32(a1, 196) = v20;
    FIELD_U8(a1, 224) = 0;
    sub_60530FC4(a1 + 148, Resource, v19);
    return sub_60531178(a1 + 148);
  }
  else
  {
    v10 = FIELD_U8(v5, 36);
    v11 = 0;
    v12 = 0;
    FIELD_U32(a1, 60) = v10;
    LOBYTE(v10) = FIELD_U8(v5, 108) + v10;
    FIELD_U32(a1, 60) = (unsigned __int8)v10;
    LOBYTE(v10) = FIELD_U8(v5, 180) + v10;
    FIELD_U32(a1, 60) = (unsigned __int8)v10;
    v13 = (unsigned __int8)(FIELD_U8(v5, 252) + v10);
    FIELD_U32(a1, 60) = v13;
    while ( 1 )
    {
      v14 = a1 + v11;
      FIELD_U32(v14, 128) = 1091043328;
      FIELD_U32(v14, 108) = 0;
      FIELD_U32(v14, 112) = v12;
      FIELD_U32(v14, 116) = v12;
      FIELD_U8(v14, 144) = v13 == 2;
      sub_60530FC4(a1 + v11 + 68, Resource, 0);
      sub_60531178(a1 + v11 + 68);
      v15 = FIELD_U32(a1, 60);
      FIELD_U32(v14, 448) = 1091043328;
      FIELD_U32(v14, 428) = 1;
      FIELD_U32(v14, 432) = v12;
      FIELD_U32(v14, 436) = v12;
      FIELD_U8(v14, 464) = v15 == 2;
      sub_60530FC4(a1 + v11 + 388, Resource, 1);
      result = sub_60531178(a1 + v11 + 388);
      if ( v11 == 240 )
        break;
      v13 = FIELD_U32(a1, 60);
      ++v12;
      v11 += 80;
    }
  }
  return result;
}
