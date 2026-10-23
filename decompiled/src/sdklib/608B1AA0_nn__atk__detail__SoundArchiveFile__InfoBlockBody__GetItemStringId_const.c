/* nn__atk__detail__SoundArchiveFile__InfoBlockBody__GetItemStringId_const
 * address: 0x608B1AA0   size: 400   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__detail__SoundArchiveFile__InfoBlockBody__GetItemStringId_const(_DWORD *a1, unsigned int a2)
{
  int result; // r0
  int v4; // r2
  unsigned int v5; // r1
  char *v6; // r12
  unsigned int v7; // t1
  bool v8; // zf
  char *v9; // r1
  int v10; // r2
  unsigned int v11; // r1
  char *v12; // r12
  unsigned int v13; // t1
  bool v14; // zf
  char *v15; // r1
  int v16; // r2
  unsigned int v17; // r1
  char *v18; // r12
  unsigned int v19; // t1
  bool v20; // zf
  char *v21; // r1
  int v22; // r2
  int v23; // r2
  unsigned int v24; // r1
  char *v25; // r12
  unsigned int v26; // t1
  bool v27; // zf
  char *v28; // r1
  char *v29; // r12
  unsigned int v30; // t1
  unsigned int v31; // r1
  char *v32; // r1

  result = -1;
  switch ( HIBYTE(a2) )
  {
    case 1u:
      if ( (a2 & 0xFF000000) == 0x1000000 )
      {
        v4 = a1[1];
        v5 = a2 & 0xFFFFFF;
        v7 = *(_DWORD *)((char *)a1 + v4);
        v6 = (char *)a1 + v4;
        if ( v5 < v7 )
        {
          v9 = &v6[*(_DWORD *)&v6[8 * v5 + 8]];
          v8 = v9 == 0;
          if ( v9 )
            v8 = (v9[20] & 1) == 0;
          if ( !v8 )
            result = *((_DWORD *)v9 + 6);
        }
      }
      break;
    case 2u:
      if ( (a2 & 0xFF000000) == 0x2000000 )
      {
        v10 = a1[3];
        v11 = a2 & 0xFFFFFF;
        v13 = *(_DWORD *)((char *)a1 + v10);
        v12 = (char *)a1 + v10;
        if ( v11 < v13 )
        {
          v15 = &v12[*(_DWORD *)&v12[8 * v11 + 8]];
          v14 = v15 == 0;
          if ( v15 )
            v14 = (v15[24] & 1) == 0;
          if ( !v14 )
            result = *((_DWORD *)v15 + 7);
        }
      }
      break;
    case 3u:
      if ( (a2 & 0xFF000000) == 0x3000000 )
      {
        v16 = a1[5];
        v17 = a2 & 0xFFFFFF;
        v19 = *(_DWORD *)((char *)a1 + v16);
        v18 = (char *)a1 + v16;
        if ( v17 < v19 )
        {
          v21 = &v18[*(_DWORD *)&v18[8 * v17 + 8]];
          v20 = v21 == 0;
          if ( v21 )
            v20 = (v21[12] & 1) == 0;
          if ( !v20 )
            result = *((_DWORD *)v21 + 4);
        }
      }
      break;
    case 4u:
      if ( (a2 & 0xFF000000) == 0x4000000 )
      {
        v22 = a1[11];
        goto LABEL_30;
      }
      break;
    case 5u:
      if ( (a2 & 0xFF000000) == 0x5000000 )
      {
        v23 = a1[7];
        v24 = a2 & 0xFFFFFF;
        v26 = *(_DWORD *)((char *)a1 + v23);
        v25 = (char *)a1 + v23;
        if ( v24 < v26 )
        {
          v28 = &v25[*(_DWORD *)&v25[8 * v24 + 8]];
          v27 = v28 == 0;
          if ( v28 )
            v27 = (v28[8] & 1) == 0;
          if ( !v27 )
            result = *((_DWORD *)v28 + 3);
        }
      }
      break;
    case 6u:
      if ( (a2 & 0xFF000000) == 0x6000000 )
      {
        v22 = a1[9];
LABEL_30:
        v30 = *(_DWORD *)((char *)a1 + v22);
        v29 = (char *)a1 + v22;
        v31 = a2 & 0xFFFFFF;
        if ( v31 < v30 )
        {
          v32 = &v29[*(_DWORD *)&v29[8 * v31 + 8]];
          if ( v32 )
          {
            if ( (v32[4] & 1) != 0 )
              result = *((_DWORD *)v32 + 2);
          }
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
