/* sub_608AA2F0
 * address: 0x608AA2F0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall sub_608AA2F0(int a1, const char *a2, char *a3, unsigned int a4)
{
  const char *v4; // r5
  const char *v7; // r7
  size_t v8; // r8
  size_t v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r1
  char *v13; // r0
  _BYTE *v14; // r0
  size_t v16; // r7
  size_t v17; // r0
  unsigned int v18; // r4

  v4 = a2;
  if ( *a2 != 47 )
  {
    v7 = (const char *)(a1 + 12);
    v8 = strlen(a2);
    v9 = strlen(v7);
    a2 = 0;
    if ( v9 + v8 < a4 )
    {
      v10 = v9 + 1;
      if ( v9 + 1 >= a4 )
        v10 = a4;
      if ( v10 >= 1 )
      {
        if ( v10 == 1 )
        {
          v13 = a3;
        }
        else
        {
          v11 = -2 - v9;
          if ( ~a4 > v11 )
            v11 = ~a4;
          v12 = v11 + 2;
          v13 = a3;
          do
          {
            if ( !*v7 )
              break;
            *v13++ = *v7;
            ++v12;
            ++v7;
          }
          while ( v12 );
        }
        *v13 = 0;
      }
      if ( *v7 )
      {
        v14 = v7 + 1;
        while ( *v14++ )
          ;
      }
      v16 = v8 + 1;
      v17 = strlen(a3);
      v18 = a4 - 1;
      if ( v17 + v8 + 1 >= a4 )
        v16 = v18 - v17;
      strncat(a3, v4, v16);
      a2 = a3;
      a3[v18] = 0;
    }
  }
  return a2;
}
