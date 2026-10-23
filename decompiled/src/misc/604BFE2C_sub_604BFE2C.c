/* sub_604BFE2C
 * address: 0x604BFE2C   size: 1096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BFE2C(int result)
{
  int v1; // r3
  int v2; // r5
  _BYTE *v3; // r11
  _BYTE *v4; // r10
  int *v5; // r8
  _BYTE *v6; // r9
  int *v7; // r6
  unsigned int v8; // r1
  int v9; // r7
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // t1
  int *v17; // [sp+14h] [bp-2Ch]
  int *v18; // [sp+18h] [bp-28h]

  v1 = 0;
  v2 = dword_60C99DEC;
  FIELD_U32(result, 50060) = 0;
  FIELD_U32(result, 50064) = 4;
  FIELD_U32(result, 50068) = 4;
  FIELD_U32(result, 50072) = 7;
  FIELD_U8(result, 50076) = 0;
  FIELD_U32(result, 50080) = 0;
  FIELD_U32(result, 50084) = 4;
  FIELD_U32(result, 50088) = 4;
  FIELD_U32(result, 50092) = 7;
  v17 = (int *)(result + 50092);
  FIELD_U8(result, 50096) = 0;
  FIELD_U32(result, 50100) = 0;
  FIELD_U32(result, 50104) = 4;
  FIELD_U32(result, 50108) = 4;
  FIELD_U32(result, 50112) = 7;
  v18 = (int *)(result + 50112);
  FIELD_U8(result, 50116) = 0;
  FIELD_U32(result, 50120) = 0;
  FIELD_U32(result, 50124) = 4;
  FIELD_U32(result, 50128) = 4;
  FIELD_U32(result, 50132) = 7;
  FIELD_U8(result, 50136) = 0;
  v3 = (_BYTE *)(result + 50136);
  if ( FIELD_U8(v2, 36) )
  {
    FIELD_U32(v2, 44) = 0;
    FIELD_U32(result, 50060) = 5;
    FIELD_U32(result, 50072) = FIELD_U32(v2, 48);
    v1 = 1;
    FIELD_U8(result, 50076) = 1;
    FIELD_U32(result, 50064) = FIELD_U32(v2, 52);
  }
  if ( FIELD_U8(v2, 108) )
  {
    ++v1;
    FIELD_U32(v2, 116) = 0;
    FIELD_U32(result, 50080) = 5;
    *v17 = FIELD_U32(v2, 120);
    v4 = (_BYTE *)(result + 50096);
    FIELD_U8(result, 50096) = 1;
    FIELD_U32(result, 50084) = FIELD_U32(v2, 124);
  }
  else
  {
    v4 = (_BYTE *)(result + 50096);
  }
  v5 = (int *)(result + 50072);
  if ( FIELD_U8(v2, 180) )
  {
    ++v1;
    FIELD_U32(v2, 188) = 0;
    FIELD_U32(result, 50100) = 5;
    *v18 = FIELD_U32(v2, 192);
    v6 = (_BYTE *)(result + 50116);
    FIELD_U8(result, 50116) = 1;
    FIELD_U32(result, 50104) = FIELD_U32(v2, 196);
  }
  else
  {
    v6 = (_BYTE *)(result + 50116);
  }
  if ( FIELD_U8(v2, 252) )
  {
    ++v1;
    FIELD_U32(v2, 260) = 0;
    FIELD_U32(result, 50120) = 5;
    v7 = (int *)(result + 50132);
    FIELD_U32(result, 50132) = FIELD_U32(v2, 264);
    *v3 = 1;
    FIELD_U32(result, 50124) = FIELD_U32(v2, 268);
  }
  else
  {
    v7 = (int *)(result + 50132);
  }
  v8 = v1 - 1;
  v9 = 0;
  v10 = 5 * (v1 - 1);
  if ( v8 < 4 )
    v9 = v10 + 5;
  v11 = v9;
  if ( v9 >= 99 )
    v11 = 99;
  if ( v9 < 0 )
    v11 = 0;
  FIELD_U32(v2, 40) = v11;
  FIELD_U32(result, 50060) = v9;
  if ( FIELD_U8(result, 50076) )
  {
    v12 = *v5;
    if ( *v5 == 6 || FIELD_U32(result, 35588) != v12 )
    {
      FIELD_U32(result, 35588) = v12;
      FIELD_U32(result, 35584) |= 1u;
    }
    if ( FIELD_U32(result, 35592) )
    {
      FIELD_U32(result, 35592) = 0;
      FIELD_U32(result, 35584) |= 1u;
    }
  }
  if ( *v4 )
  {
    v13 = *v17;
    if ( *v17 == 6 || FIELD_U32(result, 39208) != v13 )
    {
      FIELD_U32(result, 39208) = v13;
      FIELD_U32(result, 39204) |= 1u;
    }
    if ( FIELD_U32(result, 39212) != 1 )
    {
      FIELD_U32(result, 39212) = 1;
      FIELD_U32(result, 39204) |= 1u;
    }
  }
  if ( *v6 )
  {
    v14 = *v18;
    if ( *v18 == 6 || FIELD_U32(result, 42828) != v14 )
    {
      FIELD_U32(result, 42828) = v14;
      FIELD_U32(result, 42824) |= 1u;
    }
    if ( FIELD_U32(result, 42832) != 2 )
    {
      FIELD_U32(result, 42832) = 2;
      FIELD_U32(result, 42824) |= 1u;
    }
  }
  if ( *v3 )
  {
    v15 = *v7;
    if ( *v7 == 6 || FIELD_U32(result, 46448) != v15 )
    {
      FIELD_U32(result, 46448) = v15;
      FIELD_U32(result, 46444) |= 1u;
    }
    if ( FIELD_U32(result, 46452) != 3 )
    {
      FIELD_U32(result, 46452) = 3;
      v16 = FIELD_U32(result, 46444);
      result += 46444;
      *(_DWORD *)result = v16 | 1;
    }
  }
  return result;
}
