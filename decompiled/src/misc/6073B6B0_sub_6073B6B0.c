/* sub_6073B6B0
 * address: 0x6073B6B0   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073B6B0(unsigned __int8 *a1)
{
  int result; // r0
  unsigned __int8 *v3; // r7
  int v4; // r10
  unsigned __int8 *v5; // r0
  unsigned int v6; // r4
  unsigned int v7; // r9
  unsigned __int8 *v8; // r4
  _BYTE *v9; // r4
  int v10; // t1
  unsigned __int8 *v11; // r4
  int v12; // t1
  unsigned __int8 *v13; // r4
  int v14; // t1
  _BYTE *v15; // [sp+0h] [bp-38h]
  unsigned int v16; // [sp+8h] [bp-30h]
  int v17; // [sp+Ch] [bp-2Ch]
  int v18; // [sp+10h] [bp-28h]

  v16 = -1;
  result = 255;
  a1[6200] = -1;
  a1[6203] = -1;
  a1[6202] = -1;
  a1[6201] = -1;
  a1[6204] = -1;
  v3 = a1 + 6108;
  v4 = a1[6108];
  if ( a1[6108] )
  {
    v17 = 0;
    do
    {
      v5 = a1;
      if ( v16 < 5 )
        v5 = &a1[v16];
      v15 = v5 + 6200;
      while ( 1 )
      {
        v6 = *v3;
        v7 = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)v6) >> 32;
        v18 = v4--;
        if ( v17 <= 0 )
          break;
        if ( v16 == -1 )
        {
          while ( 1 )
          {
            v8 = a1;
            if ( v7 < 5 )
              v8 = &a1[v7];
            v10 = v8[6200];
            v9 = v8 + 6200;
            if ( v10 == 255 )
            {
              if ( *(unsigned __int8 *)(sub_6073AFA4((int)a1, (unsigned __int8)v7) + 7392) != v4 )
                goto LABEL_29;
              sub_6073AFA4((int)a1, (unsigned __int8)v7);
            }
            v7 = (int)(v7 + 1) % *v3;
          }
        }
        while ( 1 )
        {
          v11 = a1;
          if ( v7 < 5 )
            v11 = &a1[v7];
          v12 = v11[6200];
          v9 = v11 + 6200;
          if ( v12 == 255 )
          {
            if ( *(unsigned __int8 *)(sub_6073AFA4((int)a1, (unsigned __int8)v7) + 7392) != v4 )
              goto LABEL_29;
            if ( *(unsigned __int8 *)(sub_6073AFA4((int)a1, (unsigned __int8)v7) + 7392) == v4 )
              break;
          }
          v7 = (int)(v7 + 1) % *v3;
        }
        *v9 = *(_BYTE *)(sub_6073AFA4((int)a1, (unsigned __int8)v16) + 7392);
        *v15 = v4;
        --v17;
LABEL_30:
        result = v18;
        if ( v18 <= 1 )
          return result;
      }
      while ( 1 )
      {
        v13 = a1;
        if ( v7 < 5 )
          v13 = &a1[v7];
        v14 = v13[6200];
        v9 = v13 + 6200;
        if ( v14 == 255 )
        {
          if ( *(unsigned __int8 *)(sub_6073AFA4((int)a1, (unsigned __int8)v7) + 7392) != v4 )
          {
LABEL_29:
            *v9 = v4;
            goto LABEL_30;
          }
          if ( *(unsigned __int8 *)(sub_6073AFA4((int)a1, (unsigned __int8)v7) + 7392) == v4 )
            break;
        }
        v7 = (int)(v7 + 1) % *v3;
      }
      *v9 = v4;
      v16 = v7;
      ++v17;
      result = v18;
    }
    while ( v18 > 1 );
  }
  return result;
}
