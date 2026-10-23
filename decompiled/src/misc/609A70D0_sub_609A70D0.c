/* sub_609A70D0
 * address: 0x609A70D0   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609A70D0(int a1, int a2, int a3)
{
  unsigned int result; // r0
  unsigned __int8 *v6; // r0
  int v7; // r0
  unsigned int *v8; // r9
  unsigned int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r0
  int v12; // r5
  int v13; // r10
  int v14; // r7
  int v15; // r8
  int *v16; // r1
  char v17; // r5
  unsigned int v18; // r0
  _BYTE v20[4]; // [sp+10h] [bp-C0h] BYREF
  int v21; // [sp+14h] [bp-BCh]
  int v22; // [sp+78h] [bp-58h] BYREF
  const char *v23; // [sp+7Ch] [bp-54h]
  _DWORD v24[20]; // [sp+80h] [bp-50h] BYREF

  result = FIELD_U8(a1, 1696);
  if ( result )
  {
    if ( FIELD_S32(a1, 408) >= 1 && FIELD_U32(a1, 404)
      || (result = FIELD_U8(a1, 1860), FIELD_U8(a1, 1860)) )
    {
      result = sub_609ACCCC(a1 + 1640);
      if ( result == 1 )
      {
        v6 = (unsigned __int8 *)sub_6090B350((int)v20);
        v21 &= ~1u;
        v20[0] = 0;
        sub_6090B4B0(v6, a2);
        FIELD_U32(a1, 864) = a3;
        FIELD_U32(a1, 872) = FIELD_U16(a3, 60);
        FIELD_U8(a1, 1636) = 0;
        v7 = FIELD_U32(a1, 1632);
        FIELD_U8(a1, 1204) = 2;
        FIELD_U8(a1, 1205) = 3;
        FIELD_U8(a1, 1206) = 4;
        FIELD_U8(a1, 1207) = v7;
        FIELD_U8(a1, 1212) |= 2u;
        v8 = (unsigned int *)(a1 + 1208);
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 | 1, v8) );
        FIELD_U16(a1, 1196) = 257;
        FIELD_U8(a1, 1198) = 1;
        do
          v10 = __ldrex(v8);
        while ( __strex(v10 | 4, v8) );
        FIELD_U8(a1, 1199) = 7;
        FIELD_U8(a1, 1200) = 7;
        FIELD_U8(a1, 1201) = 7;
        do
          v11 = __ldrex(v8);
        while ( __strex(v11 | 2, v8) );
        result = FIELD_U8(a1, 1860);
        if ( FIELD_U8(a1, 1860) )
        {
          (*(void (__fastcall **)(int, int, int))(FIELD_U32(a1, 1748) + 20))(a1 + 1748, a2, a1 + 864);
          result = FIELD_U32(a1, 868);
          if ( result )
          {
            sub_609A75EC(&v22, FIELD_U32(a1, 1840));
            (*(void (__fastcall **)(int *))(v22 + 12))(&v22);
            v12 = 1;
            result = (unsigned int)sub_6017D524(v24, "%d_%s", 1, v23);
          }
          else
          {
            v12 = 1;
          }
        }
        else
        {
          v12 = 0;
        }
        v13 = FIELD_U32(a1, 404);
        if ( v13 != a1 + 400 )
        {
          v14 = v12 + 1;
          do
          {
            v15 = FIELD_U32(v13, 8);
            if ( FIELD_U8(v15, 112) )
              (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)v15 + 20))(FIELD_U32(v13, 8), a2, a1 + 864);
            result = FIELD_U32(a1, 868);
            if ( result )
            {
              sub_609A75EC(&v22, FIELD_U32(v15, 92));
              (*(void (__fastcall **)(int *))(v22 + 12))(&v22);
              result = (unsigned int)sub_6017D524(v24, "%d_%s", v14, v23);
            }
            v13 = FIELD_U32(v13, 4);
            ++v14;
          }
          while ( v13 != a1 + 400 );
        }
        v16 = *(int **)(a1 + 868);
        if ( v16 )
        {
          v17 = FIELD_U8(a1, 1744);
          sub_60920EC8(a1 + 880, v16);
          FIELD_U8(a1, 1196) = v17;
          FIELD_U8(a1, 1197) = v17;
          FIELD_U8(a1, 1198) = 1;
          do
          {
            v18 = __ldrex(v8);
            result = v18 | 4;
          }
          while ( __strex(result, v8) );
        }
      }
    }
  }
  return result;
}
