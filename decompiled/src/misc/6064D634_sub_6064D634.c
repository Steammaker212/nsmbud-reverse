/* sub_6064D634
 * address: 0x6064D634   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064D634(unsigned __int8 *a1, int a2)
{
  _BYTE *v4; // r7
  char *v5; // r4
  char v6; // r0
  int v7; // r10
  int v8; // r6
  int v9; // r12
  int v10; // lr
  int v11; // r1
  int v12; // r0
  int v13; // r3
  _BYTE *v14; // r2
  int v15; // r0
  _BYTE *v16; // r1
  unsigned __int8 *v17; // r1
  bool v18; // zf
  int v19; // r1
  unsigned __int8 *v20; // r2
  _BYTE *v21; // r2
  unsigned __int8 v22; // r3
  int v23; // t1
  _BYTE *v25; // [sp+Ch] [bp-44h]
  unsigned __int8 *v26; // [sp+10h] [bp-40h]
  unsigned __int8 *v27; // [sp+14h] [bp-3Ch]
  unsigned __int8 *v28; // [sp+18h] [bp-38h]
  unsigned __int8 *v29; // [sp+1Ch] [bp-34h]
  unsigned __int8 *v30; // [sp+20h] [bp-30h]
  unsigned __int8 *v31; // [sp+24h] [bp-2Ch]
  char v32; // [sp+28h] [bp-28h]

  v4 = a1 + 6568;
  if ( a1[6568] == a2 )
  {
    v5 = (char *)(a1 + 6570);
    v6 = 0;
  }
  else
  {
    v7 = 1;
    v8 = 0;
    v5 = (char *)(a1 + 6570);
    v25 = a1 + 6577;
    v26 = a1 + 6576;
    v27 = a1 + 6575;
    v28 = a1 + 6574;
    v29 = a1 + 6573;
    v30 = a1 + 6572;
    v31 = a1 + 6571;
    v32 = 0;
    do
    {
      Player_getActorSlotChecked(PlayerMgr_instance, v8);
      if ( (v7 & a2) != 0 )
      {
        if ( (*v4 & (unsigned __int8)v7) == 0 )
        {
          v9 = (unsigned __int8)*v5;
          if ( v9 != (unsigned __int8)v8 )
          {
            v10 = *v31;
            if ( v10 != (unsigned __int8)v8 )
            {
              v11 = *v30;
              if ( v11 != (unsigned __int8)v8 )
              {
                v12 = *v29;
                if ( v12 != (unsigned __int8)v8
                  && *v28 != (unsigned __int8)v8
                  && *v27 != (unsigned __int8)v8
                  && *v26 != (unsigned __int8)v8 )
                {
                  v13 = (unsigned __int8)*v25;
                  if ( v13 != (unsigned __int8)v8 )
                  {
                    v14 = a1 + 6570;
                    if ( v9 == 255
                      || (v14 = v31, v10 == 255)
                      || (v14 = v30, v11 == 255)
                      || (v14 = v29, v12 == 255)
                      || (v14 = v28, *v28 == 255)
                      || (v14 = v27, *v27 == 255)
                      || (v14 = v26, *v26 == 255) )
                    {
                      *v14 = v8;
                    }
                    else if ( v13 == 255 )
                    {
                      *v25 = v8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ( (*v4 & (unsigned __int8)v7) != 0 )
      {
        if ( (*(int (__fastcall **)(unsigned __int8 *, _DWORD))(*(_DWORD *)a1 + 192))(a1, (unsigned __int8)v8) == 1 )
        {
          v15 = 0;
          v16 = a1 + 6570;
          if ( *v5 == v8 )
            goto LABEL_35;
          v15 = 1;
          v16 = v31;
          if ( (char)*v31 == v8 )
            goto LABEL_35;
          v15 = 2;
          v16 = v30;
          if ( (char)*v30 == v8 )
            goto LABEL_35;
          v15 = 3;
          v16 = v29;
          if ( (char)*v29 == v8 )
            goto LABEL_35;
          v15 = 4;
          v16 = v28;
          if ( (char)*v28 == v8
            || (v15 = 5, v16 = v27, (char)*v27 == v8)
            || (v15 = 6, v16 = v26, (char)*v26 == v8)
            || (v15 = 7, v16 = v25, (char)*v25 == v8) )
          {
LABEL_35:
            *v16 = -1;
            v17 = a1;
            if ( (unsigned int)(v15 + 1) < 8 )
              v17 = &a1[v15 + 1];
            v18 = v15 == 7;
            if ( v15 != 7 )
              v18 = v17[6570] == 255;
            if ( !v18 )
            {
              do
              {
                v19 = v15 + 1;
                v20 = a1;
                if ( (unsigned int)(v15 + 1) < 8 )
                  v20 = &a1[v19];
                v23 = v20[6570];
                v21 = v20 + 6570;
                v22 = v23;
                if ( v23 == 255 )
                  break;
                v5[v15++] = v22;
                *v21 = -1;
              }
              while ( v19 < 7 );
            }
          }
        }
        else
        {
          v32 |= v7;
        }
      }
      ++v8;
      v7 = 2 * (unsigned __int8)v7;
    }
    while ( v8 != 4 );
    v6 = v32;
  }
  *v4 = v6 | a2;
  return *v5;
}
