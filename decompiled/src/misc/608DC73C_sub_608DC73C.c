/* sub_608DC73C
 * address: 0x608DC73C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DC73C(int a1)
{
  int v2; // r0
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)a1 = off_60C5BC88;
  FIELD_U32(a1, 12) = off_60C5BCA8;
  if ( FIELD_U8(a1, 556) )
  {
    sub_608ABEB4(a1);
    FIELD_U8(a1, 556) = 0;
  }
  v2 = FIELD_U32(a1, 544);
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    FIELD_U32(a1, 544) = 0;
  }
  v3 = *(void **)(a1 + 548);
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    FIELD_U32(a1, 548) = 0;
  }
  v4 = (void *)sub_608ABD84(a1);
  operator_delete(v4);
}
