#ifndef ALLCULLING_H
#define ALLCULLING_H

// text

// void CompareTo__6BoxPtsR9AAPlane3f();
// void DoesIntersect__6BoxPtsR9AAPlane3f();
// void DoesntIntersect__6BoxPtsR9AAPlane3f();
// void TestNotOutsideMinX__6BoxPtsR15ISpatialProxyAA();
// void TestNotOutsideMinY__6BoxPtsR15ISpatialProxyAA();
// void TestNotOutsideMinZ__6BoxPtsR15ISpatialProxyAA();
// void TestNotOutsideMaxX__6BoxPtsR15ISpatialProxyAA();
// void TestNotOutsideMaxY__6BoxPtsR15ISpatialProxyAA();
// void TestNotOutsideMaxZ__6BoxPtsR15ISpatialProxyAA();
// void nPts__6BoxPts();
// void mPt__6BoxPtsi();
// void GetPoint__6BoxPts();
// void CutOffGT__6BoxPtsR9AAPlane3f();
// void CutOffLT__6BoxPtsR9AAPlane3f();
// void CompareTo__6BoxPtsRC8Vector3f();
// void CompareToXZ__6BoxPtsRC8Vector3f();
// void SetTo__6BoxPtsR8Bounds3f();
// void TestNotOutside__6BoxPtsR15ISpatialProxyAA();
// void func_001EAED8();
// void _$_11HexahedronP();
// void CompareTo__11HexahedronPR9AAPlane3f();
// void DoesIntersect__11HexahedronPR9AAPlane3f();
// void DoesntIntersect__11HexahedronPR9AAPlane3f();
// void CompareTo__11HexahedronPRC8Vector3f();
// void TestNotOutside__11HexahedronPR15ISpatialProxyAA();
// void nPts__11HexahedronP();
// void mPt__11HexahedronPi();
// void func_001EB230();
// void GetPoint__11HexahedronP();
// void func_001EB268();
// void rSeekNode__15SpatialTreeIterR15ISpatialProxyAAi();
// void func_001EB368();
// void rSeekLeaf__15SpatialTreeIteriR8Vector3f();
// void MarkAll__15SpatialTreeIteriR6BoxPtsR8SphereSPi();
// void MarkAllSphere__15SpatialTreeIteriR6BoxPtsR8SphereSPi();
// void MarkAllSphereIntersect__15SpatialTreeIteriR6BoxPtsR8SphereSPi();
// void MarkSubTrees__15SpatialTreeIteriR6BoxPtsR15ISpatialProxyAAi();
// void BuildBBoxes__15SpatialTreeIterG6BoxPtsi();
// void __8SphereSP();
// void _$_8SphereSP();
// void CompareTo__8SphereSPRC8Vector3f();
// void CompareToXZ__8SphereSPRC8Vector3f();
// void CompareTo__8SphereSPR9AAPlane3f();
// void TestNotOutside__8SphereSPR15ISpatialProxyAA();
// void SetTo__8SphereSPR8Bounds3f();
// void SetTo__8SphereSPGQ218RadicalMathLibrary6Vectorf();
// void func_001EC328();
// void __10WorldScene();
// void _$_10WorldScene();
// void SetVisCone__10WorldSceneRQ218RadicalMathLibrary6VectorT1f();
// void IsSphereInCone__10WorldSceneRQ218RadicalMathLibrary6Vectorf();
// void HandleEvent__10WorldScene9EventEnumPv();
// void SetTree__10WorldSceneP11SpatialTree();
// void Init__10WorldScenei();
// void func_001ECDD8();
// void Add__10WorldSceneP12IntersectDSG();
// void Add__10WorldSceneP13StaticPhysDSG();
// void Add__10WorldSceneP15StaticEntityDSG();
// void Add__10WorldSceneP14FenceEntityDSG();
// void Add__10WorldSceneP22AnimCollisionEntityDSG();
// void Add__10WorldSceneP13AnimEntityDSG();
// void Add__10WorldSceneP11DynaPhysDSG();
// void Add__10WorldSceneP13TriggerVolume();
// void Add__10WorldSceneP11RoadSegment();
// void Add__10WorldSceneP11PathSegment();
// void GenerateSpatialReps__10WorldScene();
// void Move__10WorldSceneRQ218RadicalMathLibrary5Box3DP10IEntityDSG();
// void RemovePlace__10WorldSceneP10IEntityDSGR11SpatialNode();
// void Remove__10WorldSceneP10IEntityDSG();
// void RemoveFromLeaf__10WorldSceneP10IEntityDSG();
// void RemoveQuietFail__10WorldSceneP10IEntityDSG();
// void RenderScene__10WorldSceneUiP12tPointCamera();
// void RenderSimpleShadows__10WorldScene();
// void RenderOpaque__10WorldScene();
// void RenderTranslucent__10WorldScene();
// void Render__10WorldSceneUi();
// void GenerateStaticTree__10WorldScene();
// void PopulateStaticTree__10WorldScene();
// void Place__10WorldSceneP12IntersectDSG();
// void Place__10WorldSceneP15StaticEntityDSG();
// void Place__10WorldSceneP13StaticPhysDSG();
// void Place__10WorldSceneP11DynaPhysDSG();
// void Place__10WorldSceneP14FenceEntityDSG();
// void Place__10WorldSceneP22AnimCollisionEntityDSG();
// void Place__10WorldSceneP13AnimEntityDSG();
// void Place__10WorldSceneP13TriggerVolume();
// void Place__10WorldSceneP11RoadSegment();
// void Place__10WorldSceneP11PathSegment();
// void IsPreTreeGen__10WorldScene();
// void IsPostTreeGen__10WorldScene();
// void MarkCameraVisible__10WorldSceneP12tPointCameraUi();
// void func_001F1FA0();
// void LinkParent__t17ContiguousBinNode1Z11SpatialNodei();
// void SetSubTreeSize__t17ContiguousBinNode1Z11SpatialNodei();
// void LChildOffset__t17ContiguousBinNode1Z11SpatialNode();
// void LChild__t17ContiguousBinNode1Z11SpatialNode();
// void RSiblingOffset__t17ContiguousBinNode1Z11SpatialNode();
// void RChildOffset__t17ContiguousBinNode1Z11SpatialNode();
// void __uninitialized_copy_aux__H2ZPQ210WorldScene9zSortBlahZPQ210WorldScene9zSortBlah_X01X01X11G12__false_type_X11();
// void fill__H2ZPQ210WorldScene9zSortBlahZQ210WorldScene9zSortBlah_X01X01RCX11_v();
// void __uninitialized_fill_n_aux__H3ZPQ210WorldScene9zSortBlahZUiZQ210WorldScene9zSortBlah_X01X11RCX21G12__false_type_X01();
// void insert__t6vector2ZQ210WorldScene9zSortBlahZt7s2alloc1ZQ210WorldScene9zSortBlahPQ210WorldScene9zSortBlahUiRCQ210WorldScene9zSortBlah();
// void fill__H2ZPP10IEntityDSGZP10IEntityDSG_X01X01RCX11_v();
// void fill_n__H3ZPP10IEntityDSGZUiZP10IEntityDSG_X01X11RCX21_X01();
// void insert__t6vector2ZP10IEntityDSGZt7s2alloc1ZP10IEntityDSGPP10IEntityDSGUiRCP10IEntityDSG();
// void _M_insert_aux__t6vector2ZP10IEntityDSGZt7s2alloc1ZP10IEntityDSGPP10IEntityDSGRCP10IEntityDSG();
// void _M_insert_aux__t6vector2ZQ210WorldScene9zSortBlahZt7s2alloc1ZQ210WorldScene9zSortBlahPQ210WorldScene9zSortBlahRCQ210WorldScene9zSortBlah();
// void __push_heap__H4ZPQ210WorldScene9zSortBlahZiZQ210WorldScene9zSortBlahZ14gShaderCompare_X01X11X11X21X31_v();
// void __adjust_heap__H4ZPQ210WorldScene9zSortBlahZiZQ210WorldScene9zSortBlahZ14gShaderCompare_X01X11X11X21X31_v();
// void __make_heap__H4ZPQ210WorldScene9zSortBlahZ14gShaderCompareZQ210WorldScene9zSortBlahZi_X01X01X11PX21PX31_v();
// void sort_heap__H2ZPQ210WorldScene9zSortBlahZ14gShaderCompare_X01X01X11_v();
// void __partial_sort__H3ZPQ210WorldScene9zSortBlahZQ210WorldScene9zSortBlahZ14gShaderCompare_X01X01X01PX11X21_v();
// void __unguarded_partition__H3ZPQ210WorldScene9zSortBlahZQ210WorldScene9zSortBlahZ14gShaderCompare_X01X01X11X21_X01();
// void __introsort_loop__H4ZPQ210WorldScene9zSortBlahZQ210WorldScene9zSortBlahZiZ14gShaderCompare_X01X01PX11X21X31_v();
// void __unguarded_linear_insert__H3ZPQ210WorldScene9zSortBlahZQ210WorldScene9zSortBlahZ14gShaderCompare_X01X11X21_v();
// void __insertion_sort__H2ZPQ210WorldScene9zSortBlahZ14gShaderCompare_X01X01X11_v();
// void __unguarded_insertion_sort_aux__H3ZPQ210WorldScene9zSortBlahZQ210WorldScene9zSortBlahZ14gShaderCompare_X01X01PX11X21_v();
// void __final_insertion_sort__H2ZPQ210WorldScene9zSortBlahZ14gShaderCompare_X01X01X11_v();
// void __push_heap__H4ZPP10IEntityDSGZiZP10IEntityDSGZ13gZSortCompare_X01X11X11X21X31_v();
// void __adjust_heap__H4ZPP10IEntityDSGZiZP10IEntityDSGZ13gZSortCompare_X01X11X11X21X31_v();
// void __make_heap__H4ZPP10IEntityDSGZ13gZSortCompareZP10IEntityDSGZi_X01X01X11PX21PX31_v();
// void sort_heap__H2ZPP10IEntityDSGZ13gZSortCompare_X01X01X11_v();
// void __partial_sort__H3ZPP10IEntityDSGZP10IEntityDSGZ13gZSortCompare_X01X01X01PX11X21_v();
// void __unguarded_partition__H3ZPP10IEntityDSGZP10IEntityDSGZ13gZSortCompare_X01X01X11X21_X01();
// void __introsort_loop__H4ZPP10IEntityDSGZP10IEntityDSGZiZ13gZSortCompare_X01X01PX11X21X31_v();
// void __unguarded_linear_insert__H3ZPP10IEntityDSGZP10IEntityDSGZ13gZSortCompare_X01X11X21_v();
// void __insertion_sort__H2ZPP10IEntityDSGZ13gZSortCompare_X01X01X11_v();
// void __unguarded_insertion_sort_aux__H3ZPP10IEntityDSGZP10IEntityDSGZ13gZSortCompare_X01X01PX11X21_v();
// void __final_insertion_sort__H2ZPP10IEntityDSGZ13gZSortCompare_X01X01X11_v();
// void func_001F3A28();
// void func_001F3A68();
// void __tf6BoxPts();
// void __tf11HexahedronP();
// void __tf11SpatialTree();
// void __tf8SphereSP();
// void __tf10WorldScene();
// void __6BoxPtsRC6BoxPts();
// void func_001F3C98();
// void _$_6BoxPts();
// void _$_11SpatialTree();
// void __Q210WorldScene9zSortBlah();
// void __Q210WorldScene9zSortBlahRCQ210WorldScene9zSortBlah();
// void __as__Q210WorldScene9zSortBlahRCQ210WorldScene9zSortBlah();
// void _$_t18_Vector_alloc_base3ZP10IEntityDSGZt7s2alloc1ZP10IEntityDSGb0();
// void _$_t18_Vector_alloc_base3ZQ210WorldScene9zSortBlahZt7s2alloc1ZQ210WorldScene9zSortBlahb0();
// void __15ISpatialProxyAARC15ISpatialProxyAA();
// void _GLOBAL_$I$CompareTo__6BoxPtsR9AAPlane3f();

// rodata

// extern UNK_TYPE jtbl_0046D160;
// extern UNK_TYPE D_0046D180;
// extern UNK_TYPE _vt$10WorldScene;
// extern UNK_TYPE _vt$8SphereSP;
// extern UNK_TYPE _vt$11SpatialTree;
// extern UNK_TYPE _vt$11HexahedronP;
// extern UNK_TYPE _vt$6BoxPts;
// extern UNK_TYPE D_0046D3A0;
// extern UNK_TYPE D_0046D3A8;
// extern UNK_TYPE D_0046D3B8;
// extern UNK_TYPE D_0046D3C8;
// extern UNK_TYPE D_0046D3D8;
// extern UNK_TYPE D_0046D3E8;

// data

// extern UNK_TYPE D_0042E104;
// extern UNK_TYPE _15ISpatialProxyAA$msIntersectionEpsilon;
// extern UNK_TYPE D_0042E10C;
// extern UNK_TYPE D_0042E110;

// bss

// extern UNK_TYPE D_004B1E00;
// extern UNK_TYPE D_004B1E18;

#endif