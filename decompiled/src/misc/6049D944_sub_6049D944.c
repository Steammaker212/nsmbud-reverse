/* sub_6049D944
 * address: 0x6049D944   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049D944(int result)
{
  int *v1; // r1
  unsigned int v2; // r3
  int v3; // r2
  unsigned int v4; // r7
  unsigned int v5; // r6
  int v6; // r6
  unsigned int v7; // r5
  unsigned int v8; // r6
  unsigned int v9; // r7
  int v10; // s2
  int v11; // r7
  _DWORD *v12; // r3

  FIELD_U32(result, 4664) = 0;
  FIELD_U32(result, 4668) = 0;
  FIELD_U8(result, 4679) = 0;
  FIELD_U8(result, 4676) = 1;
  FIELD_U32(result, 22332) = 2;
  FIELD_U32(result, 22336) = 2;
  FIELD_U32(result, 22340) = 2;
  FIELD_U32(result, 22344) = 2;
  FIELD_U32(result, 22348) = 2;
  FIELD_U32(result, 22352) = 2;
  FIELD_U32(result, 22356) = 2;
  if ( FIELD_U32(result, 22480) == 1 )
  {
    v1 = (int *)(result + 22496);
    if ( FIELD_S32(result, 22496) < 1 )
      return result;
    v2 = 0;
    v3 = dword_60C99DEC;
    do
    {
      v4 = 0;
      v5 = 0;
      if ( v2 < 7 )
        v4 = v2;
      if ( v2 < 6 )
        v5 = v2;
      ++v2;
      *(_DWORD *)(result + 4 * v4 + 22332) = *(_DWORD *)(v3 + 72 * v5 + 56);
      v6 = *v1;
    }
    while ( (int)v2 < *v1 );
  }
  else
  {
    v1 = (int *)(result + 22496);
    v6 = FIELD_U32(result, 22496);
  }
  if ( v6 >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      if ( v7 < 7 )
        v8 = v7;
      if ( v7 < 4 )
        v9 = v7;
      ++v7;
      v11 = *(_DWORD *)(result + 4 * v9 + 20276);
      if ( FIELD_U8(v11, 2689) )
        v10 = FIELD_U32(v11, 380);
      v12 = (_DWORD *)(result + 12 * v8);
      v12[5599] = v10;
      v12[5600] = 0;
      v12[5601] = 0;
    }
    while ( (int)v7 < *v1 );
  }
  return result;
}
