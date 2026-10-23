/* sub_608649EC
 * address: 0x608649EC   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608649EC(const char **a1, const char *a2)
{
  _BOOL4 v2; // r7
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  bool v9; // zf
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // r1
  unsigned int v24; // r1
  unsigned int v25; // r2
  const char *v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // r2
  const char *v29; // r8
  unsigned int v30; // r0
  unsigned int v31; // r1
  signed int v32; // r0

  v5 = 0;
  if ( a2 )
  {
    *a1 = a2;
    if ( !strncmp(a2, "SARC", 4u) )
    {
      v6 = *((unsigned __int16 *)a2 + 3);
      v7 = (unsigned __int8)v6;
      v8 = v6 >> 8;
      v9 = v7 == 255;
      if ( v7 == 255 )
      {
        v2 = 1;
        v9 = v8 == 254;
      }
      if ( !v9 )
        v2 = v8 != 255 || v7 != 254;
      a1[6] = (const char *)v2;
      v10 = *((unsigned __int16 *)a2 + 8);
      v11 = bswap32(v10);
      if ( !v2 )
        v10 = HIWORD(v11);
      if ( (unsigned __int16)v10 == 256 )
      {
        v12 = *((unsigned __int16 *)a2 + 2);
        v13 = bswap32(v12);
        if ( !v2 )
          v12 = HIWORD(v13);
        if ( (unsigned __int16)v12 == 20 )
        {
          a1[1] = a2 + 20;
          if ( !strncmp(a2 + 20, "SFAT", 4u) )
          {
            v14 = *((unsigned __int16 *)a2 + 12);
            v15 = bswap32(v14);
            if ( !v2 )
              v14 = HIWORD(v15);
            if ( (unsigned __int16)v14 == 12 )
            {
              v16 = *((unsigned __int16 *)a2 + 13);
              v5 = 0;
              v17 = bswap32(v16);
              if ( !v2 )
                v16 = HIWORD(v17);
              if ( !((unsigned __int16)(v16 & 0xC000) >> 14) )
              {
                a1[4] = (const char *)(__int16)v16;
                v18 = *((unsigned __int16 *)a2 + 12);
                v19 = bswap32(v18);
                if ( !v2 )
                  v18 = HIWORD(v19);
                v20 = *((unsigned __int16 *)a2 + 2);
                v21 = bswap32(v20);
                if ( !v2 )
                  v20 = HIWORD(v21);
                a1[3] = &a2[(__int16)v20 + (__int16)v18];
                v22 = *((unsigned __int16 *)a2 + 12);
                v23 = bswap32(v22);
                if ( !v2 )
                  v22 = HIWORD(v23);
                v24 = *((unsigned __int16 *)a2 + 2);
                v25 = bswap32(v24);
                if ( !v2 )
                  v24 = HIWORD(v25);
                v26 = &a2[(__int16)v24 + (__int16)v22];
                v27 = *((unsigned __int16 *)a2 + 13);
                v28 = bswap32(v27);
                if ( !v2 )
                  v27 = HIWORD(v28);
                v29 = &v26[16 * (__int16)v27];
                if ( !strncmp(v29, "SFNT", 4u) )
                {
                  v30 = *((unsigned __int16 *)v29 + 2);
                  v31 = bswap32(v30);
                  if ( !v2 )
                    v30 = HIWORD(v31);
                  if ( (unsigned __int16)v30 == 8 )
                  {
                    a1[2] = v29 + 8;
                    v32 = *((_DWORD *)a2 + 3);
                    if ( !v2 )
                      v32 = bswap32(v32);
                    if ( v32 >= v29 + 8 - a2 )
                    {
                      v5 = 1;
                      a1[5] = &a2[v32];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
