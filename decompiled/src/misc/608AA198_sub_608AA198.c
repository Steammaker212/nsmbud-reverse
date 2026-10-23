/* sub_608AA198
 * address: 0x608AA198   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AA198(const char *a1, int a2, int a3, char *s, int a5, int a6)
{
  char *v10; // r4
  char *v11; // r4
  size_t v12; // r8
  size_t v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r1
  char *v18; // r0
  int v19; // r1
  _BYTE *v20; // r0
  size_t v22; // r5
  size_t v23; // r0
  char sa[671]; // [sp+11h] [bp-29Fh] BYREF

  if ( *s == 47 )
  {
    v10 = s;
    return (*(int (__fastcall **)(const char *, int, int, char *, int, int))(*(_DWORD *)a1 + 32))(
             a1,
             a2,
             a3,
             v10,
             a5,
             a6);
  }
  v11 = (char *)(a1 + 12);
  v12 = strlen(s);
  v13 = strlen(a1 + 12);
  v14 = 0;
  if ( v13 + v12 <= 0x27E )
  {
    if ( (int)(v13 + 1) >= 1 )
    {
      v15 = 639;
      if ( (int)(v13 + 1) < 639 )
        v15 = v13 + 1;
      if ( v15 == 1 )
      {
        v18 = sa;
      }
      else
      {
        v16 = -2 - v13;
        v17 = -640;
        if ( v16 > -640 )
          v17 = v16;
        v18 = sa;
        v19 = v17 + 2;
        do
        {
          if ( !*v11 )
            break;
          *v18++ = *v11;
          ++v19;
          ++v11;
        }
        while ( v19 );
      }
      *v18 = 0;
    }
    if ( *v11 )
    {
      v20 = v11 + 1;
      while ( *v20++ )
        ;
    }
    v10 = sa;
    v22 = v12 + 1;
    v23 = strlen(sa);
    if ( v23 + v12 + 1 >= 0x27F )
      v22 = 638 - v23;
    strncat(sa, s, v22);
    sa[638] = 0;
    return (*(int (__fastcall **)(const char *, int, int, char *, int, int))(*(_DWORD *)a1 + 32))(
             a1,
             a2,
             a3,
             v10,
             a5,
             a6);
  }
  return v14;
}
