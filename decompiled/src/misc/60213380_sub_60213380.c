/* sub_60213380
 * address: 0x60213380   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213380(int a1)
{
  _DWORD *v1; // r5
  char *v2; // r0
  int i; // r1
  char *v4; // r0
  int j; // r1
  char *v6; // r0
  int k; // r2

  v1 = (_DWORD *)sub_601E0010(a1 + 284);
  (*(void (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
  (*(void (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
  v2 = (char *)v1[1];
  if ( v2 == "Ff23" )
    return 1;
  for ( i = 0; i < 524289; ++i )
  {
    if ( v2[i] != aFf23[i] )
      break;
    if ( !v2[i] )
      return 1;
  }
  (*(void (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
  (*(void (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
  v4 = (char *)v1[1];
  if ( v4 == "Ff22" )
    return 1;
  for ( j = 0; j < 524289; ++j )
  {
    if ( v4[j] != aFf22[j] )
      break;
    if ( !v4[j] )
      return 1;
  }
  (*(void (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
  (*(void (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
  v6 = (char *)v1[1];
  if ( v6 == "Ff21" )
    return 1;
  for ( k = 0; k < 524289; ++k )
  {
    if ( v6[k] != aFf21[k] )
      break;
    if ( !v6[k] )
      return 1;
  }
  return 0;
}
