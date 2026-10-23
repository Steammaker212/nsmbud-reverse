/* sub_6097C1C8
 * address: 0x6097C1C8   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097C1C8(int result, int a2, unsigned int a3, int a4)
{
  int v4; // r6
  int v5; // r5
  char v6; // r4
  int v7; // r10
  int v8; // r1
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r0
  int (**v21)(); // [sp+4h] [bp-42Ch] BYREF
  const char *v22; // [sp+8h] [bp-428h]

  v4 = result;
  if ( a4 )
  {
    v5 = FIELD_U32(result, 1616);
    if ( FIELD_U32(result, 1612) > a3 )
      v5 += 216 * a3;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a4 + 88))(a4);
    v6 = 2;
    if ( result == *(__int16 *)dword_60CD09C0 )
      goto LABEL_9;
    v6 = 27;
    if ( result == *(__int16 *)dword_60CD09C8 )
      goto LABEL_9;
    v6 = 0;
    v7 = 0;
    if ( result == *(__int16 *)dword_60CD09C4 )
      v6 = 19;
    if ( (v6 & 2) != 0 )
    {
LABEL_9:
      v8 = v4;
      do
      {
        v9 = v8;
        v8 = FIELD_U32(v8, 208);
      }
      while ( v8 );
      result = FIELD_U32(v9, 1764);
      v7 = 1;
      if ( !result )
      {
        result = FIELD_U8(v4, 840);
        if ( (result & 1) != 0 )
        {
          sub_60941B30(&v21);
          sub_60943B88(v5 + 184);
          sub_60941B30(&v21);
          result = (int)sub_60943B88(v5 + 200);
        }
      }
    }
    if ( (v6 & 8) != 0 )
    {
      v10 = v4;
      do
      {
        v11 = v10;
        v10 = FIELD_U32(v10, 208);
      }
      while ( v10 );
      result = FIELD_U32(v11, 1764);
      if ( result != 2 )
      {
        if ( FIELD_U8(v5, 120) == 255 )
        {
          (*(void (__fastcall **)(int))(FIELD_U32(v5, 76) + 12))(v5 + 76);
          sub_604209A4(&v21, "NotFound(%s)", *(const char **)(v5 + 80));
        }
        v12 = v4;
        do
        {
          v13 = v12;
          v12 = FIELD_U32(v12, 208);
        }
        while ( v12 );
        result = FIELD_U32(v13, 1764);
        if ( !result )
        {
          result = FIELD_U8(v4, 840);
          if ( (result & 1) != 0 )
          {
            result = FIELD_U8(v5, 180);
            if ( result == 255 )
            {
              (*(void (__fastcall **)(int))(FIELD_U32(v5, 136) + 12))(v5 + 136);
              result = (int)sub_604209A4(&v21, "NotFound(%s)", *(const char **)(v5 + 140));
            }
          }
        }
      }
    }
    if ( v7 == 1 )
    {
      v21 = &sead__SafeStringBase__vtable;
      v22 = "Min=0, Max=1";
      result = (int)sub_60943B88(v5 + 16);
    }
    if ( (v6 & 1) != 0 )
    {
      v14 = v4;
      do
      {
        v15 = v14;
        v14 = FIELD_U32(v14, 208);
      }
      while ( v14 );
      result = FIELD_U32(v15, 1764);
      if ( result == 3 )
        result = (int)sub_60941B04(&v21);
    }
    if ( (v6 & 0x10) != 0 )
    {
      v16 = v4;
      do
      {
        v17 = v16;
        v16 = FIELD_U32(v16, 208);
      }
      while ( v16 );
      if ( FIELD_U32(v17, 1764) == 3 )
        goto LABEL_40;
      v18 = v4;
      do
      {
        v19 = v18;
        v18 = FIELD_U32(v18, 208);
      }
      while ( v18 );
      if ( FIELD_U32(v19, 1764) == 1 )
      {
LABEL_40:
        v21 = &sead__SafeStringBase__vtable;
        v22 = "Min=0, Max=50";
        sub_60943B88(v5 + 32);
      }
      do
      {
        v20 = v4;
        v4 = FIELD_U32(v4, 208);
      }
      while ( v4 );
      result = FIELD_U32(v20, 1764);
      if ( result == 1 )
      {
        v21 = &sead__SafeStringBase__vtable;
        v22 = "Min=0, Max=50";
        return (int)sub_60943B88(v5 + 48);
      }
    }
  }
  return result;
}
