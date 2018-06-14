..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-nexenta_edge:

.. list-table:: Description of NexentaEdge driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``nexenta_blocksize`` = ``4096``
     - (Integer) Block size for datasets
   * - ``nexenta_chunksize`` = ``32768``
     - (Integer) NexentaEdge iSCSI LUN object chunk size
   * - ``nexenta_client_address`` =
     - (String) NexentaEdge iSCSI Gateway client address for non-VIP service
   * - ``nexenta_iscsi_service`` =
     - (String) NexentaEdge iSCSI service name
   * - ``nexenta_iscsi_target_portal_port`` = ``3260``
     - (Integer) Nexenta target portal port
   * - ``nexenta_lun_container`` =
     - (String) NexentaEdge logical path of bucket for LUNs
   * - ``nexenta_rest_address`` =
     - (String) IP address of NexentaEdge management REST API endpoint
   * - ``nexenta_rest_password`` = ``nexenta``
     - (String) Password to connect to NexentaEdge
   * - ``nexenta_rest_port`` = ``8080``
     - (Integer) HTTP port to connect to Nexenta REST API server
   * - ``nexenta_rest_protocol`` = ``auto``
     - (String) Use http or https for REST connection (default auto)
   * - ``nexenta_rest_user`` = ``admin``
     - (String) User name to connect to NexentaEdge
   * - ``nexenta_replication_count`` = ``3``
     - (String) NexentaEdge iSCSI LUN object replication count.
   * - ``nexenta_encryption`` = ``False``
     - (String) NexentaEdge iSCSI LUN object encryption