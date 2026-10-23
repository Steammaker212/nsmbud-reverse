/* Pokey__collisionEnemy
 * address: 0x603836A0   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D50
// 
// Overridden by: None
int __fastcall Pokey__collisionEnemy(int a1, int a2, int a3)
{
  int result; // r0
  _BYTE *v6; // r7
  int v7; // r5
  float v8; // s0
  char *v9; // r1
  char *v10; // r2
  float v11; // s2
  float v12; // s0
  float v13; // s0
  int v14; // r0
  _BOOL4 v15; // r1
  float v16; // s0

  v6 = (_BYTE *)(a1 + 6369);
  result = FIELD_U8(a1, 6369);
  if ( !result )
  {
    result = FIELD_U32(a1, 6400);
    if ( result <= 0 )
    {
      v7 = FIELD_U32(a3, 64);
      if ( Actor__getProfileId((Actor *)v7) == 505 )
      {
        v8 = FIELD_F32(a1, 120);
        v9 = &byte_60AFE3F5;
        v10 = byte_60AFE3F4;
        if ( FIELD_F32(a1, 108) < (float)((float)(FIELD_F32(a1, 108) + FIELD_F32(v7, 108)) * 0.5) )
        {
          v10 = &byte_60AFE3F5;
          v9 = byte_60AFE3F4;
        }
        v11 = (float)*v9;
        if ( (float)((float)*v10 * v8) < 0.0 )
        {
          FIELD_F32(a1, 120) = -v8;
          FIELD_U32(a1, 80) ^= 1u;
        }
        v12 = FIELD_F32(v7, 120);
        if ( (float)(v11 * v12) < 0.0 )
        {
          FIELD_F32(v7, 120) = -v12;
          FIELD_U32(v7, 80) ^= 1u;
          FIELD_U8(v7, 6369) = 1;
        }
      }
      else
      {
        v13 = FIELD_F32(a2, 188);
        v14 = FIELD_U32(a1, 80);
        if ( v13 > 0.0 && v14 == 1 || v13 < 0.0 && !v14 )
        {
          v15 = v13 < 0.0;
          FIELD_U32(a1, 80) = v15;
          v16 = FIELD_F32(a1, 120);
          if ( v15 != v16 < 0.0 )
            FIELD_F32(a1, 120) = -v16;
        }
      }
      *v6 = 1;
      return 1;
    }
  }
  return result;
}
