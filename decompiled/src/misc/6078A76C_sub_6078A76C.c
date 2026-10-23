/* sub_6078A76C
 * address: 0x6078A76C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A76C(_DWORD *a1)
{
  _BYTE *v1; // r2
  int v2; // r1
  unsigned __int16 v3; // r1
  int v4; // r12
  int v5; // r12
  int v6; // r0

  v1 = (_BYTE *)(dword_60C99DD4 + 272);
  if ( !dword_60C99DD4 )
    v1 = (_BYTE *)(dword_60C99DEC + 16);
  if ( v1[20] )
  {
    v2 = a1[8];
    if ( v2 )
      v3 = FIELD_U32(v2, 11484) != 1;
    else
      v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( v1[92] )
  {
    v4 = a1[9];
    if ( v4 )
    {
      if ( FIELD_U32(v4, 11484) != 1 )
        v3 |= 2u;
    }
    else
    {
      v3 |= 2u;
    }
  }
  if ( v1[164] )
  {
    v5 = a1[10];
    if ( v5 )
    {
      if ( FIELD_U32(v5, 11484) != 1 )
        v3 |= 4u;
    }
    else
    {
      v3 |= 4u;
    }
  }
  if ( !v1[236] )
    return v3;
  v6 = a1[11];
  if ( !v6 )
  {
    v3 |= 8u;
    return v3;
  }
  if ( FIELD_U32(v6, 11484) != 1 )
    v3 |= 8u;
  return v3;
}
