/* sub_6089DCBC
 * address: 0x6089DCBC   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089DCBC(int a1, _DWORD *a2)
{
  unsigned int v2; // r2
  _DWORD *v3; // r1
  unsigned int v4; // r2
  _DWORD *v5; // r1
  unsigned int v6; // r2
  _DWORD *v7; // r1
  unsigned int v8; // r0

  FIELD_U32(a1, 20) = a2;
  FIELD_U32(a1, 24) = a2[100];
  v2 = ((a2[94] + 1871) & -a2[94]) + a2[100];
  if ( v2 <= a2[18] )
    a2[100] = v2;
  if ( FIELD_U32(a1, 580) )
  {
    v3 = *(_DWORD **)(a1 + 20);
    FIELD_U32(a1, 28) = v3[100];
    v4 = ((v3[94] + 127) & -v3[94]) + v3[100];
    if ( v4 <= v3[18] )
      v3[100] = v4;
  }
  if ( FIELD_U32(a1, 544) )
  {
    v5 = *(_DWORD **)(a1 + 20);
    FIELD_U32(a1, 32) = v5[100];
    v6 = ((FIELD_U32(a1, 548) + v5[94] - 1) & -v5[94]) + v5[100];
    if ( v6 <= v5[18] )
      v5[100] = v6;
  }
  if ( FIELD_U8(a1, 3) )
  {
    v7 = *(_DWORD **)(a1 + 20);
    FIELD_U32(a1, 36) = v7[100];
    v8 = ((v7[94] + 287) & -v7[94]) + v7[100];
    if ( v8 <= v7[18] )
      v7[100] = v8;
  }
  return 1;
}
