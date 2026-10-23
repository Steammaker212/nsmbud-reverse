/* sub_601E14F8
 * address: 0x601E14F8   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E14F8(int a1, unsigned int a2, int *a3)
{
  int v6; // r0
  int v7; // r11
  int v8; // r0
  int v9; // r1
  int v10; // r4
  int v11; // r5
  char *v12; // r0
  int v13; // r1
  bool v14; // cc
  char *v15; // r0
  int v16; // r1
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf
  int *v23; // [sp+0h] [bp-28h]

  v6 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v7 = sub_60178780(v6, FIELD_U32(a1, 8));
  v8 = sub_60178694(v7, a2);
  v9 = 6;
  if ( v8 )
  {
    v23 = a3;
    while ( 1 )
    {
      v10 = v8;
      v11 = v8 + 4;
      (*(void (__fastcall **)(int))(FIELD_U32(v8, 4) + 12))(v8 + 4);
      v12 = *(char **)(v11 + 4);
      v13 = 0;
      while ( v12[v13] )
      {
        if ( !v12[v13 + 1] )
        {
          ++v13;
          break;
        }
        if ( !v12[v13 + 2] )
        {
          v13 += 2;
          break;
        }
        v14 = v13 + 2 <= 0x7FFFF;
        v13 += 3;
        if ( !v14 )
        {
          v13 = 0;
          break;
        }
      }
      if ( v13 < 0 )
        v12 = &byte_60B3BA34;
      if ( *v12 == 87 )
      {
LABEL_55:
        a3 = v23;
        v10 = 0;
        v9 = 6;
        goto LABEL_58;
      }
      (*(void (__fastcall **)(int))(FIELD_U32(v10, 4) + 12))(v11);
      v15 = *(char **)(v10 + 8);
      v16 = 0;
      while ( v15[v16] )
      {
        if ( !v15[v16 + 1] )
        {
          ++v16;
          break;
        }
        if ( !v15[v16 + 2] )
        {
          v16 += 2;
          break;
        }
        v14 = v16 + 2 <= 0x7FFFF;
        v16 += 3;
        if ( !v14 )
        {
          v16 = 0;
          break;
        }
      }
      if ( v16 < 0 )
        v15 = &byte_60B3BA34;
      if ( *v15 == 70 )
        break;
      v8 = sub_60178694(v10, 0);
      v17 = v8 == 0;
      if ( v8 )
        v17 = v8 == v7;
      if ( v17 )
      {
        v8 = sub_60178694(v10, 1u);
        v18 = v8 == 0;
        if ( v8 )
          v18 = v8 == v7;
        if ( v18 )
        {
          v8 = sub_60178694(v10, 2u);
          v19 = v8 == 0;
          if ( v8 )
            v19 = v8 == v7;
          if ( v19 )
          {
            v8 = sub_60178694(v10, 3u);
            v20 = v8 == 0;
            if ( v8 )
              v20 = v8 == v7;
            if ( v20 )
            {
              v8 = sub_60178694(v10, 4u);
              v21 = v8 == 0;
              if ( v8 )
                v21 = v8 == v7;
              if ( v21 )
              {
                v8 = sub_60178694(v10, 5u);
                if ( v8 )
                {
                  v17 = v8 == v7;
                  v7 = v8;
                  if ( v17 )
                  {
                    v8 = v10;
                  }
                  else
                  {
                    a2 = 5;
                    v7 = v10;
                  }
                }
                else
                {
                  v8 = v10;
                }
              }
              else
              {
                a2 = 4;
                v7 = v10;
                if ( !v8 )
                  goto LABEL_55;
              }
            }
            else
            {
              a2 = 3;
              v7 = v10;
              if ( !v8 )
                goto LABEL_55;
            }
          }
          else
          {
            a2 = 2;
            v7 = v10;
            if ( !v8 )
              goto LABEL_55;
          }
        }
        else
        {
          a2 = 1;
          v7 = v10;
          if ( !v8 )
            goto LABEL_55;
        }
      }
      else
      {
        a2 = 0;
        v7 = v10;
        if ( !v8 )
          goto LABEL_55;
      }
    }
    a3 = v23;
    v9 = a2;
  }
  else
  {
    v10 = 0;
  }
LABEL_58:
  *a3 = v10;
  return v9;
}
