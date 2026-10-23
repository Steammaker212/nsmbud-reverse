/* sub_60910288
 * address: 0x60910288   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60910288(int a1)
{
  int v1; // r5
  int v2; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r0
  bool v7; // zf
  int v8; // r7
  int v9; // r0
  int v10; // r0
  int v11; // r0
  bool v12; // zf
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  bool v16; // zf

  *(_DWORD *)a1 = off_60C5D2A0;
  if ( FIELD_U8(a1, 56) )
  {
    v4 = FIELD_U32(a1, 28);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
    v5 = FIELD_U32(a1, 32);
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
    v6 = FIELD_U32(a1, 44);
    v7 = v6 == 0;
    if ( v6 )
    {
      v2 = FIELD_U32(a1, 40);
      v1 = a1 + 36;
      v7 = v2 == a1 + 36;
    }
    if ( !v7 )
    {
      v8 = FIELD_U32(a1, 48);
      v9 = v2 - v8;
      do
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 24))(v9);
        v2 = FIELD_U32(v2, 4);
        v9 = v2 - v8;
      }
      while ( v2 - v8 != v1 - FIELD_U32(a1, 48) );
    }
    v10 = FIELD_U32(a1, 20);
    if ( v10 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 20))(v10);
    FIELD_U8(a1, 56) = 0;
  }
  v11 = FIELD_U8(a1, 57);
  v12 = v11 == 0;
  if ( FIELD_U8(a1, 57) )
  {
    v11 = FIELD_U32(a1, 20);
    v12 = v11 == 0;
  }
  if ( !v12 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    FIELD_U32(a1, 20) = 0;
  }
  v13 = FIELD_U8(a1, 59);
  v14 = v13 == 0;
  if ( FIELD_U8(a1, 59) )
  {
    v13 = FIELD_U32(a1, 28);
    v14 = v13 == 0;
  }
  if ( !v14 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    FIELD_U32(a1, 28) = 0;
  }
  v15 = FIELD_U8(a1, 58);
  v16 = v15 == 0;
  if ( FIELD_U8(a1, 58) )
  {
    v15 = FIELD_U32(a1, 24);
    v16 = v15 == 0;
  }
  if ( !v16 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 4))(v15);
    FIELD_U32(a1, 24) = 0;
  }
  return a1;
}
