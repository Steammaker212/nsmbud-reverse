/* sub_601DA2F0
 * address: 0x601DA2F0   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DA2F0(_DWORD *a1)
{
  int v1; // r8
  int v2; // r9
  int v3; // r6
  char *v4; // r0
  int i; // r1
  char *v6; // r0
  int j; // r1
  char *v8; // r0
  int k; // r2

  v1 = 0;
  if ( *a1 != 6 )
    return v1;
  v2 = sub_601DFFE4(a1);
  v3 = v2 + 4;
  (*(void (__fastcall **)(int))(FIELD_U32(v2, 4) + 12))(v2 + 4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  v4 = *(char **)(v2 + 8);
  v1 = 1;
  if ( v4 == "F770" )
    return v1;
  for ( i = 0; i < 524289; ++i )
  {
    if ( v4[i] != aF770[i] )
      break;
    if ( !v4[i] )
      return v1;
  }
  (*(void (__fastcall **)(int))(FIELD_U32(v2, 4) + 12))(v3);
  (*(void (__fastcall **)(int))(FIELD_U32(v2, 4) + 12))(v3);
  v6 = *(char **)(v2 + 8);
  if ( v6 == "F730" )
    return v1;
  for ( j = 0; j < 524289; ++j )
  {
    if ( v6[j] != aF730[j] )
      break;
    if ( !v6[j] )
      return v1;
  }
  (*(void (__fastcall **)(int))(FIELD_U32(v2, 4) + 12))(v3);
  (*(void (__fastcall **)(int))(FIELD_U32(v2, 4) + 12))(v3);
  v8 = *(char **)(v2 + 8);
  if ( v8 == "F769" )
    return v1;
  for ( k = 0; k < 524289; ++k )
  {
    if ( v8[k] != aF769[k] )
      break;
    if ( !v8[k] )
      return v1;
  }
  return 0;
}
