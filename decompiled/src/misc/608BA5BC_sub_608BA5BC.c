/* sub_608BA5BC
 * address: 0x608BA5BC   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608BA5BC(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  unsigned int v9; // r4
  int v10; // r8
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r7
  int v15; // r5
  int v16; // r6
  int ItemLabel_const; // r0
  int ItemId_const; // r0
  int v19; // r2
  int v20; // r1
  signed int result; // r0
  int v22; // r8
  int v23; // r0
  int v24; // r1
  bool v25; // zf
  int v26; // r7
  int v27; // r5
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int v31; // r1
  int v32; // [sp+4h] [bp-2Ch]
  _DWORD v33[10]; // [sp+8h] [bp-28h] BYREF

  if ( FIELD_U32(a1, 116) )
    sub_608BA988(a1, a2, a3, a5[2]);
  if ( a6 )
  {
    v9 = 0;
    v10 = 52;
    do
    {
      if ( !FIELD_U32(a1, 116) )
        goto LABEL_54;
      v11 = a2 + 8 * v9;
      v12 = FIELD_U32(v11, 24);
      v13 = v12 == 0;
      if ( v12 )
        v13 = FIELD_U32(v11, 56) == 0;
      if ( v13 )
      {
LABEL_54:
        v14 = a5[2];
        v15 = a5[3];
        v16 = *(_DWORD *)(a6 + 8 + 4 * v9);
        if ( v16 == -1 )
        {
          v16 = -1;
        }
        else if ( (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 24))(a5[2]) == 1 )
        {
          ItemLabel_const = nn__atk__SoundArchive__GetItemLabel_const(v14, v16);
          ItemId_const = nn__atk__SoundArchive__GetItemId_const(*a5, ItemLabel_const);
          if ( ItemId_const != -1 )
          {
            v14 = *a5;
            v15 = a5[1];
            v16 = ItemId_const;
          }
        }
        v33[0] = -1;
        if ( sub_608A9EC8(v14, (int)v33, v16) == 1 )
        {
          v19 = sub_608AC060(v15);
          *(_DWORD *)(a2 + 8 * v9 + 24) = v19;
          if ( v19 )
          {
            v20 = sub_608C6D44(a2 + v10, a2 + v9 + 84) + 2;
            result = 7;
            switch ( v20 )
            {
              case 0:
                return result;
              case 1:
                if ( !FIELD_U8(a2, 88) )
                  return 9;
                goto LABEL_23;
              case 2:
              case 3:
                break;
              case 4:
                if ( !FIELD_U8(a2, 88) )
                  break;
LABEL_23:
                FIELD_U8(a2, 89) = 1;
                break;
              default:
                return 255;
            }
          }
          else if ( FIELD_U8(a2, 88) )
          {
            goto LABEL_48;
          }
        }
      }
      ++v9;
      v10 += 8;
    }
    while ( v9 < 4 );
  }
  else
  {
    v9 = 0;
    v22 = 52;
    v32 = a4 + 4;
    while ( 1 )
    {
      if ( !FIELD_U32(a1, 116) )
        goto LABEL_55;
      v23 = a2 + 8 * v9;
      v24 = FIELD_U32(v23, 24);
      v25 = v24 == 0;
      if ( v24 )
        v25 = FIELD_U32(v23, 56) == 0;
      if ( v25 )
      {
LABEL_55:
        v26 = a5[2];
        v27 = a5[3];
        v16 = *(_DWORD *)(v32 + 4 * v9);
        if ( v16 == -1 )
        {
          v16 = -1;
        }
        else if ( (*(int (__fastcall **)(int))(*(_DWORD *)v26 + 24))(a5[2]) == 1 )
        {
          v28 = nn__atk__SoundArchive__GetItemLabel_const(v26, v16);
          v29 = nn__atk__SoundArchive__GetItemId_const(*a5, v28);
          if ( v29 != -1 )
          {
            v26 = *a5;
            v27 = a5[1];
            v16 = v29;
          }
        }
        v33[0] = -1;
        if ( sub_608A9EC8(v26, (int)v33, v16) == 1 )
        {
          v30 = sub_608AC060(v27);
          *(_DWORD *)(a2 + 8 * v9 + 24) = v30;
          if ( v30 )
          {
            v31 = sub_608C6D44(a2 + v22, a2 + v9 + 84) + 2;
            result = 7;
            switch ( v31 )
            {
              case 0:
                return result;
              case 1:
                if ( FIELD_U8(a2, 88) )
                  goto LABEL_45;
                return 9;
              case 2:
              case 3:
                goto LABEL_46;
              case 4:
                if ( !FIELD_U8(a2, 88) )
                  goto LABEL_46;
LABEL_45:
                FIELD_U8(a2, 89) = 1;
                goto LABEL_46;
              default:
                return 255;
            }
          }
          if ( FIELD_U8(a2, 88) )
            break;
        }
      }
LABEL_46:
      ++v9;
      v22 += 8;
      if ( v9 >= 4 )
        return 0;
    }
LABEL_48:
    *(_DWORD *)(a2 + 8 * v9 + 20) = v16;
    FIELD_U8(a2, 89) = 1;
  }
  return 0;
}
