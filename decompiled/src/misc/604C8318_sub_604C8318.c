/* sub_604C8318
 * address: 0x604C8318   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C8318(int a1)
{
  _DWORD *v1; // r4
  int v2; // r10
  int v3; // r6
  int v4; // r7
  unsigned __int8 *v5; // r11
  int result; // r0
  int v7; // r0
  float *v8; // [sp+14h] [bp-34h]

  v1 = (_DWORD *)(a1 + 48);
  v2 = 0;
  v3 = a1 + 13909;
  v8 = (float *)(a1 + 14128);
  v4 = FIELD_U32(dword_60CC6D78, 416);
  do
  {
    v5 = (unsigned __int8 *)(v3 + v2);
    if ( !*(_BYTE *)(v3 + v2 + 31) )
    {
      result = v5[23];
      if ( v5[27] )
      {
        if ( !v5[23] )
        {
          result = sub_60474420(v1, v2 + 17, &dword_60CA2AF4, *(_DWORD *)(v3 + 4 * v2 + 35), 0);
          v5[31] = 1;
          *(_BYTE *)(v3 + v2) = 1;
          v5[27] = 0;
          if ( !v4 )
            goto LABEL_17;
          goto LABEL_15;
        }
      }
      else if ( v5[23] )
      {
        v7 = v3 + 4 * v2;
        *(_BYTE *)(*(_DWORD *)(v7 - 89) + 64) |= 1u;
        result = sub_604742D0(v1, v2 + 17, &dword_60CA2AF4, FIELD_U32(v7, 35), 1.0, 0);
        v5[31] = 1;
        *(_BYTE *)(v3 + v2) = 1;
        v5[27] = 1;
      }
LABEL_14:
      if ( !v4 )
        goto LABEL_17;
LABEL_15:
      result = v2 | 1;
      if ( (v2 | 1) == 3 )
      {
        result = *(_DWORD *)(v3 + 4 * v2 - 89);
        FIELD_U8(result, 64) &= ~1u;
        v5[27] = 0;
      }
      goto LABEL_17;
    }
    result = *(unsigned __int8 *)(v3 + v2);
    if ( *(_BYTE *)(v3 + v2) )
      goto LABEL_14;
    result = v5[27];
    if ( v5[27] )
    {
      sub_604742D0(v1, v2 + 17, &dword_60CA2AFC, *(_DWORD *)(v3 + 4 * v2 + 35), 1.0, 1);
      result = sub_6047455C((int)v1, v2 + 17, *v8);
      *(_BYTE *)(v3 + v2) = 1;
    }
    v5[31] = 0;
    if ( v4 )
      goto LABEL_15;
LABEL_17:
    ++v2;
  }
  while ( v2 != 4 );
  return result;
}
