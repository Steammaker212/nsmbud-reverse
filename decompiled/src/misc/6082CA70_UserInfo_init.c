/* UserInfo_init
 * address: 0x6082CA70   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall UserInfo_init(UserInfo *this)
{
  _DWORD *v2; // r0
  char v3; // r1
  int v4; // r0

  v2 = (_DWORD *)operator_new(0x18u);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  FIELD_U32(this, 0x14) = (int)v2;
  nn__account__Initialize();
  v3 = FIELD_U8(this, 0x10);
  if ( (v3 & 2) == 0 )
  {
    v4 = nn__account__OpenPreselectedUser(FIELD_U32(this, 0x14));
    v3 = FIELD_U8(this, 0x10);
    if ( !v4 )
    {
      v3 |= 2u;
      FIELD_U8(this, 0x10) = v3;
    }
  }
  FIELD_U8(this, 0x10) = v3 | 1;
}
