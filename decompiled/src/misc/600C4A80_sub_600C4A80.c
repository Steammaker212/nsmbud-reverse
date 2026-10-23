/* sub_600C4A80
 * address: 0x600C4A80   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_600C4A80(int a1)
{
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2

  v2 = FIELD_U32(a1, 8012);
  if ( v2 && (v3 = v2 - 1, (FIELD_U32(a1, 8012) = v3) != 0) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7984));
  }
  else
  {
    FIELD_U32(a1, 8012) = 0;
    FIELD_U32(a1, 8008) = 0;
    FIELD_U32(a1, 8004) = 0;
    FIELD_U32(a1, 8000) = 0;
    FIELD_U32(a1, 7996) = 0;
    FIELD_U32(a1, 7992) = 0;
    FIELD_U32(a1, 7988) = 0;
  }
  v4 = FIELD_U32(a1, 8044);
  if ( v4 && (v5 = v4 - 1, (FIELD_U32(a1, 8044) = v5) != 0) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8016));
  }
  else
  {
    FIELD_U32(a1, 8044) = 0;
    FIELD_U32(a1, 8040) = 0;
    FIELD_U32(a1, 8036) = 0;
    FIELD_U32(a1, 8032) = 0;
    FIELD_U32(a1, 8028) = 0;
    FIELD_U32(a1, 8024) = 0;
    FIELD_U32(a1, 8020) = 0;
  }
  v6 = FIELD_U32(a1, 8076);
  if ( v6 && (v7 = v6 - 1, (FIELD_U32(a1, 8076) = v7) != 0) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8048));
  }
  else
  {
    FIELD_U32(a1, 8076) = 0;
    FIELD_U32(a1, 8072) = 0;
    FIELD_U32(a1, 8068) = 0;
    FIELD_U32(a1, 8064) = 0;
    FIELD_U32(a1, 8060) = 0;
    FIELD_U32(a1, 8056) = 0;
    FIELD_U32(a1, 8052) = 0;
  }
  v8 = FIELD_U32(a1, 8108);
  if ( v8 && (v9 = v8 - 1, (FIELD_U32(a1, 8108) = v9) != 0) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8080));
  }
  else
  {
    FIELD_U32(a1, 8108) = 0;
    FIELD_U32(a1, 8104) = 0;
    FIELD_U32(a1, 8100) = 0;
    FIELD_U32(a1, 8096) = 0;
    FIELD_U32(a1, 8092) = 0;
    FIELD_U32(a1, 8088) = 0;
    FIELD_U32(a1, 8084) = 0;
  }
  v10 = FIELD_U32(a1, 8140);
  if ( v10 && (v11 = v10 - 1, (FIELD_U32(a1, 8140) = v11) != 0) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8112));
  }
  else
  {
    FIELD_U32(a1, 8140) = 0;
    FIELD_U32(a1, 8136) = 0;
    FIELD_U32(a1, 8132) = 0;
    FIELD_U32(a1, 8128) = 0;
    FIELD_U32(a1, 8124) = 0;
    FIELD_U32(a1, 8120) = 0;
    FIELD_U32(a1, 8116) = 0;
  }
  v12 = FIELD_U32(a1, 8172);
  if ( v12 && (v13 = v12 - 1, (FIELD_U32(a1, 8172) = v13) != 0) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8144));
  }
  else
  {
    FIELD_U32(a1, 8172) = 0;
    FIELD_U32(a1, 8168) = 0;
    FIELD_U32(a1, 8164) = 0;
    FIELD_U32(a1, 8160) = 0;
    FIELD_U32(a1, 8156) = 0;
    FIELD_U32(a1, 8152) = 0;
    FIELD_U32(a1, 8148) = 0;
  }
  v14 = FIELD_U32(a1, 8204);
  if ( v14 && (v15 = v14 - 1, (FIELD_U32(a1, 8204) = v15) != 0) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8176));
  }
  else
  {
    FIELD_U32(a1, 8204) = 0;
    FIELD_U32(a1, 8200) = 0;
    FIELD_U32(a1, 8196) = 0;
    FIELD_U32(a1, 0x2000) = 0;
    FIELD_U32(a1, 8188) = 0;
    FIELD_U32(a1, 8184) = 0;
    FIELD_U32(a1, 8180) = 0;
  }
  v16 = FIELD_U32(a1, 8236);
  if ( v16 )
  {
    v17 = v16 - 1;
    FIELD_U32(a1, 8236) = v17;
    if ( v17 )
      return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8208));
  }
  FIELD_U32(a1, 8236) = 0;
  FIELD_U32(a1, 8232) = 0;
  FIELD_U32(a1, 8228) = 0;
  FIELD_U32(a1, 8224) = 0;
  FIELD_U32(a1, 8220) = 0;
  FIELD_U32(a1, 8216) = 0;
  FIELD_U32(a1, 8212) = 0;
  return (ModelWrapper *)8212;
}
