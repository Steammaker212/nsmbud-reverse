/* sub_60983360
 * address: 0x60983360   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60983360(_DWORD *a1, int a2, const char *a3)
{
  int v6; // r0
  char *v7; // r7
  int v8; // r6
  _DWORD *v9; // r5
  int v10; // r1
  bool v11; // zf
  int v12; // r6
  int v13; // r0
  int v14; // r5
  _BYTE v16[96]; // [sp+0h] [bp-88h] BYREF
  int v17; // [sp+60h] [bp-28h] BYREF
  int v18; // [sp+64h] [bp-24h] BYREF

  v6 = sub_6085F3D0(&v18, &v17, a3);
  v7 = (char *)a3;
  if ( v6 == 1 )
  {
    v7 = "__arcsh";
    if ( v18 == 111 )
      v7 = "_ash111";
    if ( v18 == 110 )
      v7 = "_ash110";
  }
  v8 = a1[4];
  v9 = a1 + 3;
  if ( (_DWORD *)v8 == a1 + 3 )
  {
LABEL_46:
    v12 = 0;
    v13 = sub_6085B8E0((int)(a1 + 3), v7, 0);
    v14 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(_DWORD *, int, int, const char *))(*a1 + 64))(a1, v13, a2, a3);
      return v14;
    }
    return v12;
  }
  if ( v6 )
  {
    do
    {
      if ( *v7 == FIELD_U8(v8, 8)
        && (!*v7
         || v7[1] == FIELD_U8(v8, 9)
         && (!v7[1]
          || v7[2] == FIELD_U8(v8, 10)
          && (!v7[2]
           || v7[3] == FIELD_U8(v8, 11)
           && (!v7[3]
            || v7[4] == FIELD_U8(v8, 12)
            && (!v7[4]
             || v7[5] == FIELD_U8(v8, 13)
             && (!v7[5] || v7[6] == FIELD_U8(v8, 14) && (!v7[6] || v7[7] == FIELD_U8(v8, 15)))))))) )
      {
        if ( sub_60990A88(v18) )
        {
          sub_6085F4D8((int)v16, (int)a3);
          if ( sub_6085F5E4(*(int **)(v8 + 44), (int)v16) != -1 )
            return v8 + 16;
        }
        else if ( sub_6085F594(*(_WORD **)(v8 + 44), v18, v17) != -1 )
        {
          return v8 + 16;
        }
      }
      v8 = FIELD_U32(v8, 4);
    }
    while ( (_DWORD *)v8 != v9 );
    goto LABEL_46;
  }
  while ( 1 )
  {
    if ( *v7 == FIELD_U8(v8, 8) )
    {
      if ( !*v7 )
        break;
      if ( v7[1] == FIELD_U8(v8, 9) )
      {
        if ( !v7[1] )
          break;
        if ( v7[2] == FIELD_U8(v8, 10) )
        {
          if ( !v7[2] )
            break;
          if ( v7[3] == FIELD_U8(v8, 11) )
          {
            if ( !v7[3] )
              break;
            if ( v7[4] == FIELD_U8(v8, 12) )
            {
              if ( !v7[4] )
                break;
              if ( v7[5] == FIELD_U8(v8, 13) )
              {
                if ( !v7[5] )
                  break;
                v10 = (unsigned __int8)v7[6];
                if ( v10 == FIELD_U8(v8, 14) )
                {
                  v11 = v10 == 0;
                  if ( v7[6] )
                    v11 = v7[7] == FIELD_U8(v8, 15);
                  if ( v11 )
                    break;
                }
              }
            }
          }
        }
      }
    }
    v8 = FIELD_U32(v8, 4);
    if ( (_DWORD *)v8 == v9 )
      goto LABEL_46;
  }
  return v8 + 16;
}
