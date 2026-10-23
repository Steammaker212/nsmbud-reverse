/* sub_604ABCA8
 * address: 0x604ABCA8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ABCA8(unsigned __int8 *a1, unsigned int a2, int a3)
{
  int v5; // r9
  char *v6; // r7
  int v7; // r6
  unsigned __int8 *v8; // r5
  _BYTE *v9; // r10
  int v10; // r0
  char v11; // r0
  int result; // r0
  unsigned __int8 *v13; // [sp+4h] [bp-34h]
  int v14; // [sp+8h] [bp-30h]
  _BYTE *v15; // [sp+Ch] [bp-2Ch]
  _BYTE *v16; // [sp+10h] [bp-28h]

  v5 = 2;
  v6 = (char *)(a1 + 24278);
  v7 = (int)(a1 + 3732);
  v16 = a1 + 65385;
  v15 = a1 + 44829;
  v13 = a1 + 24273;
  v8 = a1 + 85941;
  v9 = a1 + 279730;
  v14 = a3 - 1;
  do
  {
    if ( v5 == 2 )
    {
      v10 = (unsigned __int8)*v15;
LABEL_6:
      v10 += (unsigned __int8)*v16;
LABEL_7:
      v10 += *v8;
      goto LABEL_8;
    }
    v10 = *v13;
    if ( v5 == 1 )
      goto LABEL_6;
    LOBYTE(v10) = *v15 + v10;
    if ( !v5 )
    {
      v10 = (unsigned __int8)v10;
      goto LABEL_7;
    }
    v10 = (unsigned __int8)(*v16 + v10);
    if ( v5 != -1 )
      goto LABEL_7;
LABEL_8:
    if ( *v9 )
    {
      if ( *(v6 - 5) )
      {
        if ( v10 == v14 )
          goto LABEL_13;
      }
      else
      {
        *(v6 - 1) = v10 == v14;
      }
    }
    else if ( !sub_604A4D48(v7) )
    {
LABEL_13:
      v11 = 1;
      goto LABEL_19;
    }
    v11 = 0;
LABEL_19:
    *v6 = v11;
    result = sub_604A46E8(v7, a2, a3);
    --v5;
    v6 += 20556;
    v7 += 20556;
  }
  while ( v5 != -2 );
  return result;
}
