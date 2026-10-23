/* sub_601B402C
 * address: 0x601B402C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_601B402C(_DWORD *a1)
{
  char *result; // r0
  int v3; // t1
  int v4; // r2
  bool v5; // zf
  _DWORD *v6; // r5
  char *v7; // r0
  int v8; // r8
  int i; // r1
  int j; // r1

  v3 = a1[264];
  result = (char *)(a1 + 264);
  if ( v3 != -1 )
  {
    v4 = a1[265];
    v5 = v4 == -1;
    if ( v4 != -1 )
      v5 = a1[266] == -1;
    if ( !v5 )
    {
      v6 = (_DWORD *)sub_601E0010(result);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v7 = (char *)v6[1];
      v8 = 4;
      if ( v7 == "W5A0" )
        goto LABEL_16;
      for ( i = 0; i < 524289; ++i )
      {
        if ( v7[i] != aW5a0[i] )
          break;
        if ( !v7[i] )
          goto LABEL_16;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      result = (char *)v6[1];
      v8 = 6;
      if ( result == "W7A0" )
      {
LABEL_16:
        result = (char *)sub_601FA2CC(dword_60C8BF58, v8);
        if ( result == (char *)1 )
          return (char *)nullsub_10(dword_60C8BF58, v8);
      }
      else
      {
        for ( j = 0; j < 524289; ++j )
        {
          if ( result[j] != aW7a0[j] )
            break;
          if ( !result[j] )
            goto LABEL_16;
        }
      }
    }
  }
  return result;
}
