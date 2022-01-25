// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALB20200616_H_
#define ALIBABACLOUD_ALB20200616_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Alb20200616 {
class AddEntriesToAclRequestAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> entry{};

  AddEntriesToAclRequestAclEntries() {}

  explicit AddEntriesToAclRequestAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~AddEntriesToAclRequestAclEntries() = default;
};
class AddEntriesToAclRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddEntriesToAclRequestAclEntries>> aclEntries{};
  shared_ptr<string> aclId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  AddEntriesToAclRequest() {}

  explicit AddEntriesToAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<AddEntriesToAclRequestAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEntriesToAclRequestAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<AddEntriesToAclRequestAclEntries>>(expect1);
      }
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~AddEntriesToAclRequest() = default;
};
class AddEntriesToAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  AddEntriesToAclResponseBody() {}

  explicit AddEntriesToAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddEntriesToAclResponseBody() = default;
};
class AddEntriesToAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddEntriesToAclResponseBody> body{};

  AddEntriesToAclResponse() {}

  explicit AddEntriesToAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddEntriesToAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEntriesToAclResponseBody>(model1);
      }
    }
  }


  virtual ~AddEntriesToAclResponse() = default;
};
class AddServersToServerGroupRequestServers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<long> weight{};

  AddServersToServerGroupRequestServers() {}

  explicit AddServersToServerGroupRequestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~AddServersToServerGroupRequestServers() = default;
};
class AddServersToServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<AddServersToServerGroupRequestServers>> servers{};

  AddServersToServerGroupRequest() {}

  explicit AddServersToServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<AddServersToServerGroupRequestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddServersToServerGroupRequestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<AddServersToServerGroupRequestServers>>(expect1);
      }
    }
  }


  virtual ~AddServersToServerGroupRequest() = default;
};
class AddServersToServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  AddServersToServerGroupResponseBody() {}

  explicit AddServersToServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddServersToServerGroupResponseBody() = default;
};
class AddServersToServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddServersToServerGroupResponseBody> body{};

  AddServersToServerGroupResponse() {}

  explicit AddServersToServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddServersToServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddServersToServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddServersToServerGroupResponse() = default;
};
class ApplyHealthCheckTemplateToServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> healthCheckTemplateId{};
  shared_ptr<string> serverGroupId{};

  ApplyHealthCheckTemplateToServerGroupRequest() {}

  explicit ApplyHealthCheckTemplateToServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckTemplateId) {
      res["HealthCheckTemplateId"] = boost::any(*healthCheckTemplateId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckTemplateId") != m.end() && !m["HealthCheckTemplateId"].empty()) {
      healthCheckTemplateId = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~ApplyHealthCheckTemplateToServerGroupRequest() = default;
};
class ApplyHealthCheckTemplateToServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  ApplyHealthCheckTemplateToServerGroupResponseBody() {}

  explicit ApplyHealthCheckTemplateToServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ApplyHealthCheckTemplateToServerGroupResponseBody() = default;
};
class ApplyHealthCheckTemplateToServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ApplyHealthCheckTemplateToServerGroupResponseBody> body{};

  ApplyHealthCheckTemplateToServerGroupResponse() {}

  explicit ApplyHealthCheckTemplateToServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyHealthCheckTemplateToServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyHealthCheckTemplateToServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyHealthCheckTemplateToServerGroupResponse() = default;
};
class AssociateAclsWithListenerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<string> aclType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  AssociateAclsWithListenerRequest() {}

  explicit AssociateAclsWithListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~AssociateAclsWithListenerRequest() = default;
};
class AssociateAclsWithListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  AssociateAclsWithListenerResponseBody() {}

  explicit AssociateAclsWithListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssociateAclsWithListenerResponseBody() = default;
};
class AssociateAclsWithListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateAclsWithListenerResponseBody> body{};

  AssociateAclsWithListenerResponse() {}

  explicit AssociateAclsWithListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateAclsWithListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateAclsWithListenerResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateAclsWithListenerResponse() = default;
};
class AssociateAdditionalCertificatesWithListenerRequestCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  AssociateAdditionalCertificatesWithListenerRequestCertificates() {}

  explicit AssociateAdditionalCertificatesWithListenerRequestCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerRequestCertificates() = default;
};
class AssociateAdditionalCertificatesWithListenerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>> certificates{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  AssociateAdditionalCertificatesWithListenerRequest() {}

  explicit AssociateAdditionalCertificatesWithListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<AssociateAdditionalCertificatesWithListenerRequestCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateAdditionalCertificatesWithListenerRequestCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerRequest() = default;
};
class AssociateAdditionalCertificatesWithListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  AssociateAdditionalCertificatesWithListenerResponseBody() {}

  explicit AssociateAdditionalCertificatesWithListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerResponseBody() = default;
};
class AssociateAdditionalCertificatesWithListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateAdditionalCertificatesWithListenerResponseBody> body{};

  AssociateAdditionalCertificatesWithListenerResponse() {}

  explicit AssociateAdditionalCertificatesWithListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateAdditionalCertificatesWithListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateAdditionalCertificatesWithListenerResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerResponse() = default;
};
class AttachCommonBandwidthPackageToLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  AttachCommonBandwidthPackageToLoadBalancerRequest() {}

  explicit AttachCommonBandwidthPackageToLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachCommonBandwidthPackageToLoadBalancerRequest() = default;
};
class AttachCommonBandwidthPackageToLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  AttachCommonBandwidthPackageToLoadBalancerResponseBody() {}

  explicit AttachCommonBandwidthPackageToLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachCommonBandwidthPackageToLoadBalancerResponseBody() = default;
};
class AttachCommonBandwidthPackageToLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachCommonBandwidthPackageToLoadBalancerResponseBody> body{};

  AttachCommonBandwidthPackageToLoadBalancerResponse() {}

  explicit AttachCommonBandwidthPackageToLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachCommonBandwidthPackageToLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachCommonBandwidthPackageToLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~AttachCommonBandwidthPackageToLoadBalancerResponse() = default;
};
class CreateAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclName{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> resourceGroupId{};

  CreateAclRequest() {}

  explicit CreateAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateAclRequest() = default;
};
class CreateAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CreateAclResponseBody() {}

  explicit CreateAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAclResponseBody() = default;
};
class CreateAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAclResponseBody> body{};

  CreateAclResponse() {}

  explicit CreateAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAclResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAclResponse() = default;
};
class CreateHealthCheckTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> healthCheckCodes{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> healthCheckHost{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<string> healthCheckTemplateName{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};

  CreateHealthCheckTemplateRequest() {}

  explicit CreateHealthCheckTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckCodes) {
      res["HealthCheckCodes"] = boost::any(*healthCheckCodes);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckHost) {
      res["HealthCheckHost"] = boost::any(*healthCheckHost);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckTemplateName) {
      res["HealthCheckTemplateName"] = boost::any(*healthCheckTemplateName);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckCodes") != m.end() && !m["HealthCheckCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckHost") != m.end() && !m["HealthCheckHost"].empty()) {
      healthCheckHost = make_shared<string>(boost::any_cast<string>(m["HealthCheckHost"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckTemplateName") != m.end() && !m["HealthCheckTemplateName"].empty()) {
      healthCheckTemplateName = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateName"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~CreateHealthCheckTemplateRequest() = default;
};
class CreateHealthCheckTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> healthCheckTemplateId{};
  shared_ptr<string> requestId{};

  CreateHealthCheckTemplateResponseBody() {}

  explicit CreateHealthCheckTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckTemplateId) {
      res["HealthCheckTemplateId"] = boost::any(*healthCheckTemplateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckTemplateId") != m.end() && !m["HealthCheckTemplateId"].empty()) {
      healthCheckTemplateId = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateHealthCheckTemplateResponseBody() = default;
};
class CreateHealthCheckTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHealthCheckTemplateResponseBody> body{};

  CreateHealthCheckTemplateResponse() {}

  explicit CreateHealthCheckTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHealthCheckTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHealthCheckTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHealthCheckTemplateResponse() = default;
};
class CreateListenerRequestCaCertificates : public Darabonba::Model {
public:

  CreateListenerRequestCaCertificates() {}

  explicit CreateListenerRequestCaCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~CreateListenerRequestCaCertificates() = default;
};
class CreateListenerRequestCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  CreateListenerRequestCertificates() {}

  explicit CreateListenerRequestCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~CreateListenerRequestCertificates() = default;
};
class CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples() {}

  explicit CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples() = default;
};
class CreateListenerRequestDefaultActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  CreateListenerRequestDefaultActionsForwardGroupConfig() {}

  explicit CreateListenerRequestDefaultActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<CreateListenerRequestDefaultActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~CreateListenerRequestDefaultActionsForwardGroupConfig() = default;
};
class CreateListenerRequestDefaultActions : public Darabonba::Model {
public:
  shared_ptr<CreateListenerRequestDefaultActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<string> type{};

  CreateListenerRequestDefaultActions() {}

  explicit CreateListenerRequestDefaultActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        CreateListenerRequestDefaultActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<CreateListenerRequestDefaultActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateListenerRequestDefaultActions() = default;
};
class CreateListenerRequestQuicConfig : public Darabonba::Model {
public:
  shared_ptr<string> quicListenerId{};
  shared_ptr<bool> quicUpgradeEnabled{};

  CreateListenerRequestQuicConfig() {}

  explicit CreateListenerRequestQuicConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quicListenerId) {
      res["QuicListenerId"] = boost::any(*quicListenerId);
    }
    if (quicUpgradeEnabled) {
      res["QuicUpgradeEnabled"] = boost::any(*quicUpgradeEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuicListenerId") != m.end() && !m["QuicListenerId"].empty()) {
      quicListenerId = make_shared<string>(boost::any_cast<string>(m["QuicListenerId"]));
    }
    if (m.find("QuicUpgradeEnabled") != m.end() && !m["QuicUpgradeEnabled"].empty()) {
      quicUpgradeEnabled = make_shared<bool>(boost::any_cast<bool>(m["QuicUpgradeEnabled"]));
    }
  }


  virtual ~CreateListenerRequestQuicConfig() = default;
};
class CreateListenerRequestXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<string> XForwardedForClientCertClientVerifyAlias{};
  shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled{};
  shared_ptr<string> XForwardedForClientCertFingerprintAlias{};
  shared_ptr<bool> XForwardedForClientCertFingerprintEnabled{};
  shared_ptr<string> XForwardedForClientCertIssuerDNAlias{};
  shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled{};
  shared_ptr<string> XForwardedForClientCertSubjectDNAlias{};
  shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled{};
  shared_ptr<bool> XForwardedForClientSrcPortEnabled{};
  shared_ptr<bool> XForwardedForEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForSLBIdEnabled{};
  shared_ptr<bool> XForwardedForSLBPortEnabled{};

  CreateListenerRequestXForwardedForConfig() {}

  explicit CreateListenerRequestXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForClientCertClientVerifyAlias) {
      res["XForwardedForClientCertClientVerifyAlias"] = boost::any(*XForwardedForClientCertClientVerifyAlias);
    }
    if (XForwardedForClientCertClientVerifyEnabled) {
      res["XForwardedForClientCertClientVerifyEnabled"] = boost::any(*XForwardedForClientCertClientVerifyEnabled);
    }
    if (XForwardedForClientCertFingerprintAlias) {
      res["XForwardedForClientCertFingerprintAlias"] = boost::any(*XForwardedForClientCertFingerprintAlias);
    }
    if (XForwardedForClientCertFingerprintEnabled) {
      res["XForwardedForClientCertFingerprintEnabled"] = boost::any(*XForwardedForClientCertFingerprintEnabled);
    }
    if (XForwardedForClientCertIssuerDNAlias) {
      res["XForwardedForClientCertIssuerDNAlias"] = boost::any(*XForwardedForClientCertIssuerDNAlias);
    }
    if (XForwardedForClientCertIssuerDNEnabled) {
      res["XForwardedForClientCertIssuerDNEnabled"] = boost::any(*XForwardedForClientCertIssuerDNEnabled);
    }
    if (XForwardedForClientCertSubjectDNAlias) {
      res["XForwardedForClientCertSubjectDNAlias"] = boost::any(*XForwardedForClientCertSubjectDNAlias);
    }
    if (XForwardedForClientCertSubjectDNEnabled) {
      res["XForwardedForClientCertSubjectDNEnabled"] = boost::any(*XForwardedForClientCertSubjectDNEnabled);
    }
    if (XForwardedForClientSrcPortEnabled) {
      res["XForwardedForClientSrcPortEnabled"] = boost::any(*XForwardedForClientSrcPortEnabled);
    }
    if (XForwardedForEnabled) {
      res["XForwardedForEnabled"] = boost::any(*XForwardedForEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForSLBIdEnabled) {
      res["XForwardedForSLBIdEnabled"] = boost::any(*XForwardedForSLBIdEnabled);
    }
    if (XForwardedForSLBPortEnabled) {
      res["XForwardedForSLBPortEnabled"] = boost::any(*XForwardedForSLBPortEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForClientCertClientVerifyAlias") != m.end() && !m["XForwardedForClientCertClientVerifyAlias"].empty()) {
      XForwardedForClientCertClientVerifyAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertClientVerifyAlias"]));
    }
    if (m.find("XForwardedForClientCertClientVerifyEnabled") != m.end() && !m["XForwardedForClientCertClientVerifyEnabled"].empty()) {
      XForwardedForClientCertClientVerifyEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertClientVerifyEnabled"]));
    }
    if (m.find("XForwardedForClientCertFingerprintAlias") != m.end() && !m["XForwardedForClientCertFingerprintAlias"].empty()) {
      XForwardedForClientCertFingerprintAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertFingerprintAlias"]));
    }
    if (m.find("XForwardedForClientCertFingerprintEnabled") != m.end() && !m["XForwardedForClientCertFingerprintEnabled"].empty()) {
      XForwardedForClientCertFingerprintEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertFingerprintEnabled"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNAlias") != m.end() && !m["XForwardedForClientCertIssuerDNAlias"].empty()) {
      XForwardedForClientCertIssuerDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertIssuerDNAlias"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNEnabled") != m.end() && !m["XForwardedForClientCertIssuerDNEnabled"].empty()) {
      XForwardedForClientCertIssuerDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertIssuerDNEnabled"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNAlias") != m.end() && !m["XForwardedForClientCertSubjectDNAlias"].empty()) {
      XForwardedForClientCertSubjectDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertSubjectDNAlias"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNEnabled") != m.end() && !m["XForwardedForClientCertSubjectDNEnabled"].empty()) {
      XForwardedForClientCertSubjectDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertSubjectDNEnabled"]));
    }
    if (m.find("XForwardedForClientSrcPortEnabled") != m.end() && !m["XForwardedForClientSrcPortEnabled"].empty()) {
      XForwardedForClientSrcPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientSrcPortEnabled"]));
    }
    if (m.find("XForwardedForEnabled") != m.end() && !m["XForwardedForEnabled"].empty()) {
      XForwardedForEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForSLBIdEnabled") != m.end() && !m["XForwardedForSLBIdEnabled"].empty()) {
      XForwardedForSLBIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBIdEnabled"]));
    }
    if (m.find("XForwardedForSLBPortEnabled") != m.end() && !m["XForwardedForSLBPortEnabled"].empty()) {
      XForwardedForSLBPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBPortEnabled"]));
    }
  }


  virtual ~CreateListenerRequestXForwardedForConfig() = default;
};
class CreateListenerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateListenerRequestCaCertificates>> caCertificates{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<CreateListenerRequestCertificates>> certificates{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<CreateListenerRequestDefaultActions>> defaultActions{};
  shared_ptr<bool> dryRun{};
  shared_ptr<bool> gzipEnabled{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<CreateListenerRequestQuicConfig> quicConfig{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<CreateListenerRequestXForwardedForConfig> XForwardedForConfig{};

  CreateListenerRequest() {}

  explicit CreateListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertificates) {
      vector<boost::any> temp1;
      for(auto item1:*caCertificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CaCertificates"] = boost::any(temp1);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (defaultActions) {
      vector<boost::any> temp1;
      for(auto item1:*defaultActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DefaultActions"] = boost::any(temp1);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (gzipEnabled) {
      res["GzipEnabled"] = boost::any(*gzipEnabled);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (quicConfig) {
      res["QuicConfig"] = quicConfig ? boost::any(quicConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaCertificates") != m.end() && !m["CaCertificates"].empty()) {
      if (typeid(vector<boost::any>) == m["CaCertificates"].type()) {
        vector<CreateListenerRequestCaCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CaCertificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerRequestCaCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        caCertificates = make_shared<vector<CreateListenerRequestCaCertificates>>(expect1);
      }
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<CreateListenerRequestCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerRequestCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<CreateListenerRequestCertificates>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DefaultActions") != m.end() && !m["DefaultActions"].empty()) {
      if (typeid(vector<boost::any>) == m["DefaultActions"].type()) {
        vector<CreateListenerRequestDefaultActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DefaultActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerRequestDefaultActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        defaultActions = make_shared<vector<CreateListenerRequestDefaultActions>>(expect1);
      }
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("GzipEnabled") != m.end() && !m["GzipEnabled"].empty()) {
      gzipEnabled = make_shared<bool>(boost::any_cast<bool>(m["GzipEnabled"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("QuicConfig") != m.end() && !m["QuicConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuicConfig"].type()) {
        CreateListenerRequestQuicConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuicConfig"]));
        quicConfig = make_shared<CreateListenerRequestQuicConfig>(model1);
      }
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        CreateListenerRequestXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<CreateListenerRequestXForwardedForConfig>(model1);
      }
    }
  }


  virtual ~CreateListenerRequest() = default;
};
class CreateListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> requestId{};

  CreateListenerResponseBody() {}

  explicit CreateListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateListenerResponseBody() = default;
};
class CreateListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateListenerResponseBody> body{};

  CreateListenerResponse() {}

  explicit CreateListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateListenerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateListenerResponse() = default;
};
class CreateLoadBalancerRequestLoadBalancerBillingConfig : public Darabonba::Model {
public:
  shared_ptr<string> payType{};

  CreateLoadBalancerRequestLoadBalancerBillingConfig() {}

  explicit CreateLoadBalancerRequestLoadBalancerBillingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
  }


  virtual ~CreateLoadBalancerRequestLoadBalancerBillingConfig() = default;
};
class CreateLoadBalancerRequestModificationProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  CreateLoadBalancerRequestModificationProtectionConfig() {}

  explicit CreateLoadBalancerRequestModificationProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateLoadBalancerRequestModificationProtectionConfig() = default;
};
class CreateLoadBalancerRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateLoadBalancerRequestZoneMappings() {}

  explicit CreateLoadBalancerRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateLoadBalancerRequestZoneMappings() = default;
};
class CreateLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressAllocatedMode{};
  shared_ptr<string> addressType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> deletionProtectionEnabled{};
  shared_ptr<bool> dryRun{};
  shared_ptr<CreateLoadBalancerRequestLoadBalancerBillingConfig> loadBalancerBillingConfig{};
  shared_ptr<string> loadBalancerEdition{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<CreateLoadBalancerRequestModificationProtectionConfig> modificationProtectionConfig{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<CreateLoadBalancerRequestZoneMappings>> zoneMappings{};

  CreateLoadBalancerRequest() {}

  explicit CreateLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressAllocatedMode) {
      res["AddressAllocatedMode"] = boost::any(*addressAllocatedMode);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deletionProtectionEnabled) {
      res["DeletionProtectionEnabled"] = boost::any(*deletionProtectionEnabled);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerBillingConfig) {
      res["LoadBalancerBillingConfig"] = loadBalancerBillingConfig ? boost::any(loadBalancerBillingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancerEdition) {
      res["LoadBalancerEdition"] = boost::any(*loadBalancerEdition);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (modificationProtectionConfig) {
      res["ModificationProtectionConfig"] = modificationProtectionConfig ? boost::any(modificationProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressAllocatedMode") != m.end() && !m["AddressAllocatedMode"].empty()) {
      addressAllocatedMode = make_shared<string>(boost::any_cast<string>(m["AddressAllocatedMode"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeletionProtectionEnabled") != m.end() && !m["DeletionProtectionEnabled"].empty()) {
      deletionProtectionEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtectionEnabled"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerBillingConfig") != m.end() && !m["LoadBalancerBillingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerBillingConfig"].type()) {
        CreateLoadBalancerRequestLoadBalancerBillingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerBillingConfig"]));
        loadBalancerBillingConfig = make_shared<CreateLoadBalancerRequestLoadBalancerBillingConfig>(model1);
      }
    }
    if (m.find("LoadBalancerEdition") != m.end() && !m["LoadBalancerEdition"].empty()) {
      loadBalancerEdition = make_shared<string>(boost::any_cast<string>(m["LoadBalancerEdition"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("ModificationProtectionConfig") != m.end() && !m["ModificationProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModificationProtectionConfig"].type()) {
        CreateLoadBalancerRequestModificationProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModificationProtectionConfig"]));
        modificationProtectionConfig = make_shared<CreateLoadBalancerRequestModificationProtectionConfig>(model1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<CreateLoadBalancerRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLoadBalancerRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<CreateLoadBalancerRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~CreateLoadBalancerRequest() = default;
};
class CreateLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> requestId{};

  CreateLoadBalancerResponseBody() {}

  explicit CreateLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLoadBalancerResponseBody() = default;
};
class CreateLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLoadBalancerResponseBody> body{};

  CreateLoadBalancerResponse() {}

  explicit CreateLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadBalancerResponse() = default;
};
class CreateRuleRequestRuleActionsFixedResponseConfig : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> httpCode{};

  CreateRuleRequestRuleActionsFixedResponseConfig() {}

  explicit CreateRuleRequestRuleActionsFixedResponseConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsFixedResponseConfig() = default;
};
class CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<long> timeout{};

  CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession() {}

  explicit CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession() = default;
};
class CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class CreateRuleRequestRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession{};
  shared_ptr<vector<CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  CreateRuleRequestRuleActionsForwardGroupConfig() {}

  explicit CreateRuleRequestRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupStickySession) {
      res["ServerGroupStickySession"] = serverGroupStickySession ? boost::any(serverGroupStickySession->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupStickySession") != m.end() && !m["ServerGroupStickySession"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerGroupStickySession"].type()) {
        CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerGroupStickySession"]));
        serverGroupStickySession = make_shared<CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession>(model1);
      }
    }
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~CreateRuleRequestRuleActionsForwardGroupConfig() = default;
};
class CreateRuleRequestRuleActionsInsertHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  CreateRuleRequestRuleActionsInsertHeaderConfig() {}

  explicit CreateRuleRequestRuleActionsInsertHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsInsertHeaderConfig() = default;
};
class CreateRuleRequestRuleActionsRedirectConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> path{};
  shared_ptr<string> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> query{};

  CreateRuleRequestRuleActionsRedirectConfig() {}

  explicit CreateRuleRequestRuleActionsRedirectConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsRedirectConfig() = default;
};
class CreateRuleRequestRuleActionsRewriteConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> path{};
  shared_ptr<string> query{};

  CreateRuleRequestRuleActionsRewriteConfig() {}

  explicit CreateRuleRequestRuleActionsRewriteConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsRewriteConfig() = default;
};
class CreateRuleRequestRuleActionsTrafficLimitConfig : public Darabonba::Model {
public:
  shared_ptr<long> QPS{};

  CreateRuleRequestRuleActionsTrafficLimitConfig() {}

  explicit CreateRuleRequestRuleActionsTrafficLimitConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsTrafficLimitConfig() = default;
};
class CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() {}

  explicit CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() = default;
};
class CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples{};

  CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() {}

  explicit CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default;
};
class CreateRuleRequestRuleActionsTrafficMirrorConfig : public Darabonba::Model {
public:
  shared_ptr<CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig> mirrorGroupConfig{};
  shared_ptr<string> targetType{};

  CreateRuleRequestRuleActionsTrafficMirrorConfig() {}

  explicit CreateRuleRequestRuleActionsTrafficMirrorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mirrorGroupConfig) {
      res["MirrorGroupConfig"] = mirrorGroupConfig ? boost::any(mirrorGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MirrorGroupConfig") != m.end() && !m["MirrorGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MirrorGroupConfig"].type()) {
        CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MirrorGroupConfig"]));
        mirrorGroupConfig = make_shared<CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateRuleRequestRuleActionsTrafficMirrorConfig() = default;
};
class CreateRuleRequestRuleActions : public Darabonba::Model {
public:
  shared_ptr<CreateRuleRequestRuleActionsFixedResponseConfig> fixedResponseConfig{};
  shared_ptr<CreateRuleRequestRuleActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<CreateRuleRequestRuleActionsInsertHeaderConfig> insertHeaderConfig{};
  shared_ptr<long> order{};
  shared_ptr<CreateRuleRequestRuleActionsRedirectConfig> redirectConfig{};
  shared_ptr<CreateRuleRequestRuleActionsRewriteConfig> rewriteConfig{};
  shared_ptr<CreateRuleRequestRuleActionsTrafficLimitConfig> trafficLimitConfig{};
  shared_ptr<CreateRuleRequestRuleActionsTrafficMirrorConfig> trafficMirrorConfig{};
  shared_ptr<string> type{};

  CreateRuleRequestRuleActions() {}

  explicit CreateRuleRequestRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fixedResponseConfig) {
      res["FixedResponseConfig"] = fixedResponseConfig ? boost::any(fixedResponseConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (insertHeaderConfig) {
      res["InsertHeaderConfig"] = insertHeaderConfig ? boost::any(insertHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (redirectConfig) {
      res["RedirectConfig"] = redirectConfig ? boost::any(redirectConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rewriteConfig) {
      res["RewriteConfig"] = rewriteConfig ? boost::any(rewriteConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficLimitConfig) {
      res["TrafficLimitConfig"] = trafficLimitConfig ? boost::any(trafficLimitConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficMirrorConfig) {
      res["TrafficMirrorConfig"] = trafficMirrorConfig ? boost::any(trafficMirrorConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FixedResponseConfig") != m.end() && !m["FixedResponseConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FixedResponseConfig"].type()) {
        CreateRuleRequestRuleActionsFixedResponseConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FixedResponseConfig"]));
        fixedResponseConfig = make_shared<CreateRuleRequestRuleActionsFixedResponseConfig>(model1);
      }
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        CreateRuleRequestRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<CreateRuleRequestRuleActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("InsertHeaderConfig") != m.end() && !m["InsertHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InsertHeaderConfig"].type()) {
        CreateRuleRequestRuleActionsInsertHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InsertHeaderConfig"]));
        insertHeaderConfig = make_shared<CreateRuleRequestRuleActionsInsertHeaderConfig>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RedirectConfig") != m.end() && !m["RedirectConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectConfig"].type()) {
        CreateRuleRequestRuleActionsRedirectConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectConfig"]));
        redirectConfig = make_shared<CreateRuleRequestRuleActionsRedirectConfig>(model1);
      }
    }
    if (m.find("RewriteConfig") != m.end() && !m["RewriteConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RewriteConfig"].type()) {
        CreateRuleRequestRuleActionsRewriteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RewriteConfig"]));
        rewriteConfig = make_shared<CreateRuleRequestRuleActionsRewriteConfig>(model1);
      }
    }
    if (m.find("TrafficLimitConfig") != m.end() && !m["TrafficLimitConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficLimitConfig"].type()) {
        CreateRuleRequestRuleActionsTrafficLimitConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficLimitConfig"]));
        trafficLimitConfig = make_shared<CreateRuleRequestRuleActionsTrafficLimitConfig>(model1);
      }
    }
    if (m.find("TrafficMirrorConfig") != m.end() && !m["TrafficMirrorConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficMirrorConfig"].type()) {
        CreateRuleRequestRuleActionsTrafficMirrorConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficMirrorConfig"]));
        trafficMirrorConfig = make_shared<CreateRuleRequestRuleActionsTrafficMirrorConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateRuleRequestRuleActions() = default;
};
class CreateRuleRequestRuleConditionsCookieConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateRuleRequestRuleConditionsCookieConfigValues() {}

  explicit CreateRuleRequestRuleConditionsCookieConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateRuleRequestRuleConditionsCookieConfigValues() = default;
};
class CreateRuleRequestRuleConditionsCookieConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRuleRequestRuleConditionsCookieConfigValues>> values{};

  CreateRuleRequestRuleConditionsCookieConfig() {}

  explicit CreateRuleRequestRuleConditionsCookieConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<CreateRuleRequestRuleConditionsCookieConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestRuleConditionsCookieConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<CreateRuleRequestRuleConditionsCookieConfigValues>>(expect1);
      }
    }
  }


  virtual ~CreateRuleRequestRuleConditionsCookieConfig() = default;
};
class CreateRuleRequestRuleConditionsHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  CreateRuleRequestRuleConditionsHeaderConfig() {}

  explicit CreateRuleRequestRuleConditionsHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRuleRequestRuleConditionsHeaderConfig() = default;
};
class CreateRuleRequestRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRuleRequestRuleConditionsHostConfig() {}

  explicit CreateRuleRequestRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRuleRequestRuleConditionsHostConfig() = default;
};
class CreateRuleRequestRuleConditionsMethodConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRuleRequestRuleConditionsMethodConfig() {}

  explicit CreateRuleRequestRuleConditionsMethodConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRuleRequestRuleConditionsMethodConfig() = default;
};
class CreateRuleRequestRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRuleRequestRuleConditionsPathConfig() {}

  explicit CreateRuleRequestRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRuleRequestRuleConditionsPathConfig() = default;
};
class CreateRuleRequestRuleConditionsQueryStringConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateRuleRequestRuleConditionsQueryStringConfigValues() {}

  explicit CreateRuleRequestRuleConditionsQueryStringConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateRuleRequestRuleConditionsQueryStringConfigValues() = default;
};
class CreateRuleRequestRuleConditionsQueryStringConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRuleRequestRuleConditionsQueryStringConfigValues>> values{};

  CreateRuleRequestRuleConditionsQueryStringConfig() {}

  explicit CreateRuleRequestRuleConditionsQueryStringConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<CreateRuleRequestRuleConditionsQueryStringConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestRuleConditionsQueryStringConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<CreateRuleRequestRuleConditionsQueryStringConfigValues>>(expect1);
      }
    }
  }


  virtual ~CreateRuleRequestRuleConditionsQueryStringConfig() = default;
};
class CreateRuleRequestRuleConditionsSourceIpConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRuleRequestRuleConditionsSourceIpConfig() {}

  explicit CreateRuleRequestRuleConditionsSourceIpConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRuleRequestRuleConditionsSourceIpConfig() = default;
};
class CreateRuleRequestRuleConditions : public Darabonba::Model {
public:
  shared_ptr<CreateRuleRequestRuleConditionsCookieConfig> cookieConfig{};
  shared_ptr<CreateRuleRequestRuleConditionsHeaderConfig> headerConfig{};
  shared_ptr<CreateRuleRequestRuleConditionsHostConfig> hostConfig{};
  shared_ptr<CreateRuleRequestRuleConditionsMethodConfig> methodConfig{};
  shared_ptr<CreateRuleRequestRuleConditionsPathConfig> pathConfig{};
  shared_ptr<CreateRuleRequestRuleConditionsQueryStringConfig> queryStringConfig{};
  shared_ptr<CreateRuleRequestRuleConditionsSourceIpConfig> sourceIpConfig{};
  shared_ptr<string> type{};

  CreateRuleRequestRuleConditions() {}

  explicit CreateRuleRequestRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookieConfig) {
      res["CookieConfig"] = cookieConfig ? boost::any(cookieConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headerConfig) {
      res["HeaderConfig"] = headerConfig ? boost::any(headerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (methodConfig) {
      res["MethodConfig"] = methodConfig ? boost::any(methodConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryStringConfig) {
      res["QueryStringConfig"] = queryStringConfig ? boost::any(queryStringConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceIpConfig) {
      res["SourceIpConfig"] = sourceIpConfig ? boost::any(sourceIpConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CookieConfig") != m.end() && !m["CookieConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CookieConfig"].type()) {
        CreateRuleRequestRuleConditionsCookieConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CookieConfig"]));
        cookieConfig = make_shared<CreateRuleRequestRuleConditionsCookieConfig>(model1);
      }
    }
    if (m.find("HeaderConfig") != m.end() && !m["HeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeaderConfig"].type()) {
        CreateRuleRequestRuleConditionsHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeaderConfig"]));
        headerConfig = make_shared<CreateRuleRequestRuleConditionsHeaderConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        CreateRuleRequestRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<CreateRuleRequestRuleConditionsHostConfig>(model1);
      }
    }
    if (m.find("MethodConfig") != m.end() && !m["MethodConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MethodConfig"].type()) {
        CreateRuleRequestRuleConditionsMethodConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MethodConfig"]));
        methodConfig = make_shared<CreateRuleRequestRuleConditionsMethodConfig>(model1);
      }
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        CreateRuleRequestRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<CreateRuleRequestRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("QueryStringConfig") != m.end() && !m["QueryStringConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueryStringConfig"].type()) {
        CreateRuleRequestRuleConditionsQueryStringConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueryStringConfig"]));
        queryStringConfig = make_shared<CreateRuleRequestRuleConditionsQueryStringConfig>(model1);
      }
    }
    if (m.find("SourceIpConfig") != m.end() && !m["SourceIpConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceIpConfig"].type()) {
        CreateRuleRequestRuleConditionsSourceIpConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceIpConfig"]));
        sourceIpConfig = make_shared<CreateRuleRequestRuleConditionsSourceIpConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateRuleRequestRuleConditions() = default;
};
class CreateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> priority{};
  shared_ptr<vector<CreateRuleRequestRuleActions>> ruleActions{};
  shared_ptr<vector<CreateRuleRequestRuleConditions>> ruleConditions{};
  shared_ptr<string> ruleName{};

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<CreateRuleRequestRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<CreateRuleRequestRuleActions>>(expect1);
      }
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<CreateRuleRequestRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<CreateRuleRequestRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~CreateRuleRequest() = default;
};
class CreateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> ruleId{};

  CreateRuleResponseBody() {}

  explicit CreateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CreateRuleResponseBody() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRuleResponseBody> body{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleResponse() = default;
};
class CreateRulesRequestRulesRuleActionsFixedResponseConfig : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> httpCode{};

  CreateRulesRequestRulesRuleActionsFixedResponseConfig() {}

  explicit CreateRulesRequestRulesRuleActionsFixedResponseConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsFixedResponseConfig() = default;
};
class CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<long> timeout{};

  CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession() {}

  explicit CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession() = default;
};
class CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class CreateRulesRequestRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession{};
  shared_ptr<vector<CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  CreateRulesRequestRulesRuleActionsForwardGroupConfig() {}

  explicit CreateRulesRequestRulesRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupStickySession) {
      res["ServerGroupStickySession"] = serverGroupStickySession ? boost::any(serverGroupStickySession->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupStickySession") != m.end() && !m["ServerGroupStickySession"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerGroupStickySession"].type()) {
        CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerGroupStickySession"]));
        serverGroupStickySession = make_shared<CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession>(model1);
      }
    }
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsForwardGroupConfig() = default;
};
class CreateRulesRequestRulesRuleActionsInsertHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  CreateRulesRequestRulesRuleActionsInsertHeaderConfig() {}

  explicit CreateRulesRequestRulesRuleActionsInsertHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsInsertHeaderConfig() = default;
};
class CreateRulesRequestRulesRuleActionsRedirectConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> path{};
  shared_ptr<string> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> query{};

  CreateRulesRequestRulesRuleActionsRedirectConfig() {}

  explicit CreateRulesRequestRulesRuleActionsRedirectConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsRedirectConfig() = default;
};
class CreateRulesRequestRulesRuleActionsRewriteConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> path{};
  shared_ptr<string> query{};

  CreateRulesRequestRulesRuleActionsRewriteConfig() {}

  explicit CreateRulesRequestRulesRuleActionsRewriteConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsRewriteConfig() = default;
};
class CreateRulesRequestRulesRuleActionsTrafficLimitConfig : public Darabonba::Model {
public:
  shared_ptr<long> QPS{};

  CreateRulesRequestRulesRuleActionsTrafficLimitConfig() {}

  explicit CreateRulesRequestRulesRuleActionsTrafficLimitConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsTrafficLimitConfig() = default;
};
class CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() {}

  explicit CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() = default;
};
class CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples{};

  CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() {}

  explicit CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default;
};
class CreateRulesRequestRulesRuleActionsTrafficMirrorConfig : public Darabonba::Model {
public:
  shared_ptr<CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig> mirrorGroupConfig{};
  shared_ptr<string> targetType{};

  CreateRulesRequestRulesRuleActionsTrafficMirrorConfig() {}

  explicit CreateRulesRequestRulesRuleActionsTrafficMirrorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mirrorGroupConfig) {
      res["MirrorGroupConfig"] = mirrorGroupConfig ? boost::any(mirrorGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MirrorGroupConfig") != m.end() && !m["MirrorGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MirrorGroupConfig"].type()) {
        CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MirrorGroupConfig"]));
        mirrorGroupConfig = make_shared<CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActionsTrafficMirrorConfig() = default;
};
class CreateRulesRequestRulesRuleActions : public Darabonba::Model {
public:
  shared_ptr<CreateRulesRequestRulesRuleActionsFixedResponseConfig> fixedResponseConfig{};
  shared_ptr<CreateRulesRequestRulesRuleActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<CreateRulesRequestRulesRuleActionsInsertHeaderConfig> insertHeaderConfig{};
  shared_ptr<long> order{};
  shared_ptr<CreateRulesRequestRulesRuleActionsRedirectConfig> redirectConfig{};
  shared_ptr<CreateRulesRequestRulesRuleActionsRewriteConfig> rewriteConfig{};
  shared_ptr<CreateRulesRequestRulesRuleActionsTrafficLimitConfig> trafficLimitConfig{};
  shared_ptr<CreateRulesRequestRulesRuleActionsTrafficMirrorConfig> trafficMirrorConfig{};
  shared_ptr<string> type{};

  CreateRulesRequestRulesRuleActions() {}

  explicit CreateRulesRequestRulesRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fixedResponseConfig) {
      res["FixedResponseConfig"] = fixedResponseConfig ? boost::any(fixedResponseConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (insertHeaderConfig) {
      res["InsertHeaderConfig"] = insertHeaderConfig ? boost::any(insertHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (redirectConfig) {
      res["RedirectConfig"] = redirectConfig ? boost::any(redirectConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rewriteConfig) {
      res["RewriteConfig"] = rewriteConfig ? boost::any(rewriteConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficLimitConfig) {
      res["TrafficLimitConfig"] = trafficLimitConfig ? boost::any(trafficLimitConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficMirrorConfig) {
      res["TrafficMirrorConfig"] = trafficMirrorConfig ? boost::any(trafficMirrorConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FixedResponseConfig") != m.end() && !m["FixedResponseConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FixedResponseConfig"].type()) {
        CreateRulesRequestRulesRuleActionsFixedResponseConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FixedResponseConfig"]));
        fixedResponseConfig = make_shared<CreateRulesRequestRulesRuleActionsFixedResponseConfig>(model1);
      }
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        CreateRulesRequestRulesRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<CreateRulesRequestRulesRuleActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("InsertHeaderConfig") != m.end() && !m["InsertHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InsertHeaderConfig"].type()) {
        CreateRulesRequestRulesRuleActionsInsertHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InsertHeaderConfig"]));
        insertHeaderConfig = make_shared<CreateRulesRequestRulesRuleActionsInsertHeaderConfig>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RedirectConfig") != m.end() && !m["RedirectConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectConfig"].type()) {
        CreateRulesRequestRulesRuleActionsRedirectConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectConfig"]));
        redirectConfig = make_shared<CreateRulesRequestRulesRuleActionsRedirectConfig>(model1);
      }
    }
    if (m.find("RewriteConfig") != m.end() && !m["RewriteConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RewriteConfig"].type()) {
        CreateRulesRequestRulesRuleActionsRewriteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RewriteConfig"]));
        rewriteConfig = make_shared<CreateRulesRequestRulesRuleActionsRewriteConfig>(model1);
      }
    }
    if (m.find("TrafficLimitConfig") != m.end() && !m["TrafficLimitConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficLimitConfig"].type()) {
        CreateRulesRequestRulesRuleActionsTrafficLimitConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficLimitConfig"]));
        trafficLimitConfig = make_shared<CreateRulesRequestRulesRuleActionsTrafficLimitConfig>(model1);
      }
    }
    if (m.find("TrafficMirrorConfig") != m.end() && !m["TrafficMirrorConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficMirrorConfig"].type()) {
        CreateRulesRequestRulesRuleActionsTrafficMirrorConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficMirrorConfig"]));
        trafficMirrorConfig = make_shared<CreateRulesRequestRulesRuleActionsTrafficMirrorConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleActions() = default;
};
class CreateRulesRequestRulesRuleConditionsCookieConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateRulesRequestRulesRuleConditionsCookieConfigValues() {}

  explicit CreateRulesRequestRulesRuleConditionsCookieConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsCookieConfigValues() = default;
};
class CreateRulesRequestRulesRuleConditionsCookieConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRulesRequestRulesRuleConditionsCookieConfigValues>> values{};

  CreateRulesRequestRulesRuleConditionsCookieConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsCookieConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<CreateRulesRequestRulesRuleConditionsCookieConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestRulesRuleConditionsCookieConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<CreateRulesRequestRulesRuleConditionsCookieConfigValues>>(expect1);
      }
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsCookieConfig() = default;
};
class CreateRulesRequestRulesRuleConditionsHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  CreateRulesRequestRulesRuleConditionsHeaderConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsHeaderConfig() = default;
};
class CreateRulesRequestRulesRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRulesRequestRulesRuleConditionsHostConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsHostConfig() = default;
};
class CreateRulesRequestRulesRuleConditionsMethodConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRulesRequestRulesRuleConditionsMethodConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsMethodConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsMethodConfig() = default;
};
class CreateRulesRequestRulesRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRulesRequestRulesRuleConditionsPathConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsPathConfig() = default;
};
class CreateRulesRequestRulesRuleConditionsQueryStringConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateRulesRequestRulesRuleConditionsQueryStringConfigValues() {}

  explicit CreateRulesRequestRulesRuleConditionsQueryStringConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsQueryStringConfigValues() = default;
};
class CreateRulesRequestRulesRuleConditionsQueryStringConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRulesRequestRulesRuleConditionsQueryStringConfigValues>> values{};

  CreateRulesRequestRulesRuleConditionsQueryStringConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsQueryStringConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<CreateRulesRequestRulesRuleConditionsQueryStringConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestRulesRuleConditionsQueryStringConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<CreateRulesRequestRulesRuleConditionsQueryStringConfigValues>>(expect1);
      }
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsQueryStringConfig() = default;
};
class CreateRulesRequestRulesRuleConditionsResponseHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  CreateRulesRequestRulesRuleConditionsResponseHeaderConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsResponseHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsResponseHeaderConfig() = default;
};
class CreateRulesRequestRulesRuleConditionsSourceIpConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateRulesRequestRulesRuleConditionsSourceIpConfig() {}

  explicit CreateRulesRequestRulesRuleConditionsSourceIpConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditionsSourceIpConfig() = default;
};
class CreateRulesRequestRulesRuleConditions : public Darabonba::Model {
public:
  shared_ptr<CreateRulesRequestRulesRuleConditionsCookieConfig> cookieConfig{};
  shared_ptr<CreateRulesRequestRulesRuleConditionsHeaderConfig> headerConfig{};
  shared_ptr<CreateRulesRequestRulesRuleConditionsHostConfig> hostConfig{};
  shared_ptr<CreateRulesRequestRulesRuleConditionsMethodConfig> methodConfig{};
  shared_ptr<CreateRulesRequestRulesRuleConditionsPathConfig> pathConfig{};
  shared_ptr<CreateRulesRequestRulesRuleConditionsQueryStringConfig> queryStringConfig{};
  shared_ptr<CreateRulesRequestRulesRuleConditionsResponseHeaderConfig> responseHeaderConfig{};
  shared_ptr<CreateRulesRequestRulesRuleConditionsSourceIpConfig> sourceIpConfig{};
  shared_ptr<string> type{};

  CreateRulesRequestRulesRuleConditions() {}

  explicit CreateRulesRequestRulesRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookieConfig) {
      res["CookieConfig"] = cookieConfig ? boost::any(cookieConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headerConfig) {
      res["HeaderConfig"] = headerConfig ? boost::any(headerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (methodConfig) {
      res["MethodConfig"] = methodConfig ? boost::any(methodConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryStringConfig) {
      res["QueryStringConfig"] = queryStringConfig ? boost::any(queryStringConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseHeaderConfig) {
      res["ResponseHeaderConfig"] = responseHeaderConfig ? boost::any(responseHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceIpConfig) {
      res["SourceIpConfig"] = sourceIpConfig ? boost::any(sourceIpConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CookieConfig") != m.end() && !m["CookieConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CookieConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsCookieConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CookieConfig"]));
        cookieConfig = make_shared<CreateRulesRequestRulesRuleConditionsCookieConfig>(model1);
      }
    }
    if (m.find("HeaderConfig") != m.end() && !m["HeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeaderConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeaderConfig"]));
        headerConfig = make_shared<CreateRulesRequestRulesRuleConditionsHeaderConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<CreateRulesRequestRulesRuleConditionsHostConfig>(model1);
      }
    }
    if (m.find("MethodConfig") != m.end() && !m["MethodConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MethodConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsMethodConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MethodConfig"]));
        methodConfig = make_shared<CreateRulesRequestRulesRuleConditionsMethodConfig>(model1);
      }
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<CreateRulesRequestRulesRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("QueryStringConfig") != m.end() && !m["QueryStringConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueryStringConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsQueryStringConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueryStringConfig"]));
        queryStringConfig = make_shared<CreateRulesRequestRulesRuleConditionsQueryStringConfig>(model1);
      }
    }
    if (m.find("ResponseHeaderConfig") != m.end() && !m["ResponseHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResponseHeaderConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsResponseHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResponseHeaderConfig"]));
        responseHeaderConfig = make_shared<CreateRulesRequestRulesRuleConditionsResponseHeaderConfig>(model1);
      }
    }
    if (m.find("SourceIpConfig") != m.end() && !m["SourceIpConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceIpConfig"].type()) {
        CreateRulesRequestRulesRuleConditionsSourceIpConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceIpConfig"]));
        sourceIpConfig = make_shared<CreateRulesRequestRulesRuleConditionsSourceIpConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateRulesRequestRulesRuleConditions() = default;
};
class CreateRulesRequestRules : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<long> priority{};
  shared_ptr<vector<CreateRulesRequestRulesRuleActions>> ruleActions{};
  shared_ptr<vector<CreateRulesRequestRulesRuleConditions>> ruleConditions{};
  shared_ptr<string> ruleName{};

  CreateRulesRequestRules() {}

  explicit CreateRulesRequestRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<CreateRulesRequestRulesRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestRulesRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<CreateRulesRequestRulesRuleActions>>(expect1);
      }
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<CreateRulesRequestRulesRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestRulesRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<CreateRulesRequestRulesRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~CreateRulesRequestRules() = default;
};
class CreateRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<vector<CreateRulesRequestRules>> rules{};

  CreateRulesRequest() {}

  explicit CreateRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<CreateRulesRequestRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<CreateRulesRequestRules>>(expect1);
      }
    }
  }


  virtual ~CreateRulesRequest() = default;
};
class CreateRulesResponseBodyRuleIds : public Darabonba::Model {
public:
  shared_ptr<long> priority{};
  shared_ptr<string> ruleId{};

  CreateRulesResponseBodyRuleIds() {}

  explicit CreateRulesResponseBodyRuleIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CreateRulesResponseBodyRuleIds() = default;
};
class CreateRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateRulesResponseBodyRuleIds>> ruleIds{};

  CreateRulesResponseBody() {}

  explicit CreateRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleIds) {
      vector<boost::any> temp1;
      for(auto item1:*ruleIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleIds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleIds"].type()) {
        vector<CreateRulesResponseBodyRuleIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesResponseBodyRuleIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleIds = make_shared<vector<CreateRulesResponseBodyRuleIds>>(expect1);
      }
    }
  }


  virtual ~CreateRulesResponseBody() = default;
};
class CreateRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRulesResponseBody> body{};

  CreateRulesResponse() {}

  explicit CreateRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRulesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRulesResponse() = default;
};
class CreateSecurityPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ciphers{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityPolicyName{};
  shared_ptr<vector<string>> TLSVersions{};

  CreateSecurityPolicyRequest() {}

  explicit CreateSecurityPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityPolicyName) {
      res["SecurityPolicyName"] = boost::any(*securityPolicyName);
    }
    if (TLSVersions) {
      res["TLSVersions"] = boost::any(*TLSVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityPolicyName") != m.end() && !m["SecurityPolicyName"].empty()) {
      securityPolicyName = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyName"]));
    }
    if (m.find("TLSVersions") != m.end() && !m["TLSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TLSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TLSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      TLSVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateSecurityPolicyRequest() = default;
};
class CreateSecurityPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> securityPolicyId{};

  CreateSecurityPolicyResponseBody() {}

  explicit CreateSecurityPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~CreateSecurityPolicyResponseBody() = default;
};
class CreateSecurityPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSecurityPolicyResponseBody> body{};

  CreateSecurityPolicyResponse() {}

  explicit CreateSecurityPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSecurityPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSecurityPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSecurityPolicyResponse() = default;
};
class CreateServerGroupRequestHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> healthCheckCodes{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<string> healthCheckHost{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};

  CreateServerGroupRequestHealthCheckConfig() {}

  explicit CreateServerGroupRequestHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckCodes) {
      res["HealthCheckCodes"] = boost::any(*healthCheckCodes);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckHost) {
      res["HealthCheckHost"] = boost::any(*healthCheckHost);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckCodes") != m.end() && !m["HealthCheckCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckHost") != m.end() && !m["HealthCheckHost"].empty()) {
      healthCheckHost = make_shared<string>(boost::any_cast<string>(m["HealthCheckHost"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~CreateServerGroupRequestHealthCheckConfig() = default;
};
class CreateServerGroupRequestStickySessionConfig : public Darabonba::Model {
public:
  shared_ptr<string> cookie{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<bool> stickySessionEnabled{};
  shared_ptr<string> stickySessionType{};

  CreateServerGroupRequestStickySessionConfig() {}

  explicit CreateServerGroupRequestStickySessionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (stickySessionEnabled) {
      res["StickySessionEnabled"] = boost::any(*stickySessionEnabled);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("StickySessionEnabled") != m.end() && !m["StickySessionEnabled"].empty()) {
      stickySessionEnabled = make_shared<bool>(boost::any_cast<bool>(m["StickySessionEnabled"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
  }


  virtual ~CreateServerGroupRequestStickySessionConfig() = default;
};
class CreateServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<CreateServerGroupRequestHealthCheckConfig> healthCheckConfig{};
  shared_ptr<string> protocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> serverGroupName{};
  shared_ptr<string> serverGroupType{};
  shared_ptr<string> serviceName{};
  shared_ptr<CreateServerGroupRequestStickySessionConfig> stickySessionConfig{};
  shared_ptr<string> vpcId{};

  CreateServerGroupRequest() {}

  explicit CreateServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (serverGroupName) {
      res["ServerGroupName"] = boost::any(*serverGroupName);
    }
    if (serverGroupType) {
      res["ServerGroupType"] = boost::any(*serverGroupType);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (stickySessionConfig) {
      res["StickySessionConfig"] = stickySessionConfig ? boost::any(stickySessionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckConfig") != m.end() && !m["HealthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheckConfig"].type()) {
        CreateServerGroupRequestHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheckConfig"]));
        healthCheckConfig = make_shared<CreateServerGroupRequestHealthCheckConfig>(model1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("ServerGroupName") != m.end() && !m["ServerGroupName"].empty()) {
      serverGroupName = make_shared<string>(boost::any_cast<string>(m["ServerGroupName"]));
    }
    if (m.find("ServerGroupType") != m.end() && !m["ServerGroupType"].empty()) {
      serverGroupType = make_shared<string>(boost::any_cast<string>(m["ServerGroupType"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StickySessionConfig") != m.end() && !m["StickySessionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["StickySessionConfig"].type()) {
        CreateServerGroupRequestStickySessionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StickySessionConfig"]));
        stickySessionConfig = make_shared<CreateServerGroupRequestStickySessionConfig>(model1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateServerGroupRequest() = default;
};
class CreateServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};

  CreateServerGroupResponseBody() {}

  explicit CreateServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~CreateServerGroupResponseBody() = default;
};
class CreateServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServerGroupResponseBody> body{};

  CreateServerGroupResponse() {}

  explicit CreateServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServerGroupResponse() = default;
};
class DeleteAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  DeleteAclRequest() {}

  explicit DeleteAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~DeleteAclRequest() = default;
};
class DeleteAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteAclResponseBody() {}

  explicit DeleteAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAclResponseBody() = default;
};
class DeleteAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAclResponseBody> body{};

  DeleteAclResponse() {}

  explicit DeleteAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAclResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAclResponse() = default;
};
class DeleteHealthCheckTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> healthCheckTemplateIds{};

  DeleteHealthCheckTemplatesRequest() {}

  explicit DeleteHealthCheckTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckTemplateIds) {
      res["HealthCheckTemplateIds"] = boost::any(*healthCheckTemplateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckTemplateIds") != m.end() && !m["HealthCheckTemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckTemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckTemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckTemplateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteHealthCheckTemplatesRequest() = default;
};
class DeleteHealthCheckTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHealthCheckTemplatesResponseBody() {}

  explicit DeleteHealthCheckTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteHealthCheckTemplatesResponseBody() = default;
};
class DeleteHealthCheckTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHealthCheckTemplatesResponseBody> body{};

  DeleteHealthCheckTemplatesResponse() {}

  explicit DeleteHealthCheckTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHealthCheckTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHealthCheckTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHealthCheckTemplatesResponse() = default;
};
class DeleteListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  DeleteListenerRequest() {}

  explicit DeleteListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~DeleteListenerRequest() = default;
};
class DeleteListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteListenerResponseBody() {}

  explicit DeleteListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteListenerResponseBody() = default;
};
class DeleteListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteListenerResponseBody> body{};

  DeleteListenerResponse() {}

  explicit DeleteListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteListenerResponse() = default;
};
class DeleteLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};

  DeleteLoadBalancerRequest() {}

  explicit DeleteLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~DeleteLoadBalancerRequest() = default;
};
class DeleteLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteLoadBalancerResponseBody() {}

  explicit DeleteLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteLoadBalancerResponseBody() = default;
};
class DeleteLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLoadBalancerResponseBody> body{};

  DeleteLoadBalancerResponse() {}

  explicit DeleteLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLoadBalancerResponse() = default;
};
class DeleteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ruleId{};

  DeleteRuleRequest() {}

  explicit DeleteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DeleteRuleRequest() = default;
};
class DeleteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteRuleResponseBody() {}

  explicit DeleteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRuleResponseBody() = default;
};
class DeleteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRuleResponseBody> body{};

  DeleteRuleResponse() {}

  explicit DeleteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRuleResponse() = default;
};
class DeleteRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> ruleIds{};

  DeleteRulesRequest() {}

  explicit DeleteRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ruleIds) {
      res["RuleIds"] = boost::any(*ruleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteRulesRequest() = default;
};
class DeleteRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteRulesResponseBody() {}

  explicit DeleteRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRulesResponseBody() = default;
};
class DeleteRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRulesResponseBody> body{};

  DeleteRulesResponse() {}

  explicit DeleteRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRulesResponse() = default;
};
class DeleteSecurityPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> securityPolicyId{};

  DeleteSecurityPolicyRequest() {}

  explicit DeleteSecurityPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~DeleteSecurityPolicyRequest() = default;
};
class DeleteSecurityPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSecurityPolicyResponseBody() {}

  explicit DeleteSecurityPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSecurityPolicyResponseBody() = default;
};
class DeleteSecurityPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSecurityPolicyResponseBody> body{};

  DeleteSecurityPolicyResponse() {}

  explicit DeleteSecurityPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSecurityPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecurityPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecurityPolicyResponse() = default;
};
class DeleteServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> serverGroupId{};

  DeleteServerGroupRequest() {}

  explicit DeleteServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~DeleteServerGroupRequest() = default;
};
class DeleteServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteServerGroupResponseBody() {}

  explicit DeleteServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServerGroupResponseBody() = default;
};
class DeleteServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServerGroupResponseBody> body{};

  DeleteServerGroupResponse() {}

  explicit DeleteServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServerGroupResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeZonesResponseBodyZones>> zones{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeZonesResponseBodyZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeZonesResponseBodyZones>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBody() = default;
};
class DescribeZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class DetachCommonBandwidthPackageFromLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  DetachCommonBandwidthPackageFromLoadBalancerRequest() {}

  explicit DetachCommonBandwidthPackageFromLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DetachCommonBandwidthPackageFromLoadBalancerRequest() = default;
};
class DetachCommonBandwidthPackageFromLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DetachCommonBandwidthPackageFromLoadBalancerResponseBody() {}

  explicit DetachCommonBandwidthPackageFromLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachCommonBandwidthPackageFromLoadBalancerResponseBody() = default;
};
class DetachCommonBandwidthPackageFromLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerResponseBody> body{};

  DetachCommonBandwidthPackageFromLoadBalancerResponse() {}

  explicit DetachCommonBandwidthPackageFromLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachCommonBandwidthPackageFromLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachCommonBandwidthPackageFromLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~DetachCommonBandwidthPackageFromLoadBalancerResponse() = default;
};
class DisableDeletionProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> resourceId{};

  DisableDeletionProtectionRequest() {}

  explicit DisableDeletionProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~DisableDeletionProtectionRequest() = default;
};
class DisableDeletionProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableDeletionProtectionResponseBody() {}

  explicit DisableDeletionProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableDeletionProtectionResponseBody() = default;
};
class DisableDeletionProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableDeletionProtectionResponseBody> body{};

  DisableDeletionProtectionResponse() {}

  explicit DisableDeletionProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableDeletionProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableDeletionProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~DisableDeletionProtectionResponse() = default;
};
class DisableLoadBalancerAccessLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};

  DisableLoadBalancerAccessLogRequest() {}

  explicit DisableLoadBalancerAccessLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~DisableLoadBalancerAccessLogRequest() = default;
};
class DisableLoadBalancerAccessLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableLoadBalancerAccessLogResponseBody() {}

  explicit DisableLoadBalancerAccessLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableLoadBalancerAccessLogResponseBody() = default;
};
class DisableLoadBalancerAccessLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableLoadBalancerAccessLogResponseBody> body{};

  DisableLoadBalancerAccessLogResponse() {}

  explicit DisableLoadBalancerAccessLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableLoadBalancerAccessLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableLoadBalancerAccessLogResponseBody>(model1);
      }
    }
  }


  virtual ~DisableLoadBalancerAccessLogResponse() = default;
};
class DissociateAclsFromListenerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  DissociateAclsFromListenerRequest() {}

  explicit DissociateAclsFromListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~DissociateAclsFromListenerRequest() = default;
};
class DissociateAclsFromListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DissociateAclsFromListenerResponseBody() {}

  explicit DissociateAclsFromListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DissociateAclsFromListenerResponseBody() = default;
};
class DissociateAclsFromListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateAclsFromListenerResponseBody> body{};

  DissociateAclsFromListenerResponse() {}

  explicit DissociateAclsFromListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DissociateAclsFromListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateAclsFromListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateAclsFromListenerResponse() = default;
};
class DissociateAdditionalCertificatesFromListenerRequestCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  DissociateAdditionalCertificatesFromListenerRequestCertificates() {}

  explicit DissociateAdditionalCertificatesFromListenerRequestCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~DissociateAdditionalCertificatesFromListenerRequestCertificates() = default;
};
class DissociateAdditionalCertificatesFromListenerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DissociateAdditionalCertificatesFromListenerRequestCertificates>> certificates{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  DissociateAdditionalCertificatesFromListenerRequest() {}

  explicit DissociateAdditionalCertificatesFromListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<DissociateAdditionalCertificatesFromListenerRequestCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DissociateAdditionalCertificatesFromListenerRequestCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<DissociateAdditionalCertificatesFromListenerRequestCertificates>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~DissociateAdditionalCertificatesFromListenerRequest() = default;
};
class DissociateAdditionalCertificatesFromListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DissociateAdditionalCertificatesFromListenerResponseBody() {}

  explicit DissociateAdditionalCertificatesFromListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DissociateAdditionalCertificatesFromListenerResponseBody() = default;
};
class DissociateAdditionalCertificatesFromListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateAdditionalCertificatesFromListenerResponseBody> body{};

  DissociateAdditionalCertificatesFromListenerResponse() {}

  explicit DissociateAdditionalCertificatesFromListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DissociateAdditionalCertificatesFromListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateAdditionalCertificatesFromListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateAdditionalCertificatesFromListenerResponse() = default;
};
class EnableDeletionProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> resourceId{};

  EnableDeletionProtectionRequest() {}

  explicit EnableDeletionProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~EnableDeletionProtectionRequest() = default;
};
class EnableDeletionProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableDeletionProtectionResponseBody() {}

  explicit EnableDeletionProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableDeletionProtectionResponseBody() = default;
};
class EnableDeletionProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableDeletionProtectionResponseBody> body{};

  EnableDeletionProtectionResponse() {}

  explicit EnableDeletionProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableDeletionProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableDeletionProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~EnableDeletionProtectionResponse() = default;
};
class EnableLoadBalancerAccessLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> logProject{};
  shared_ptr<string> logStore{};

  EnableLoadBalancerAccessLogRequest() {}

  explicit EnableLoadBalancerAccessLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
  }


  virtual ~EnableLoadBalancerAccessLogRequest() = default;
};
class EnableLoadBalancerAccessLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableLoadBalancerAccessLogResponseBody() {}

  explicit EnableLoadBalancerAccessLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableLoadBalancerAccessLogResponseBody() = default;
};
class EnableLoadBalancerAccessLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableLoadBalancerAccessLogResponseBody> body{};

  EnableLoadBalancerAccessLogResponse() {}

  explicit EnableLoadBalancerAccessLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableLoadBalancerAccessLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableLoadBalancerAccessLogResponseBody>(model1);
      }
    }
  }


  virtual ~EnableLoadBalancerAccessLogResponse() = default;
};
class GetHealthCheckTemplateAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> healthCheckTemplateId{};

  GetHealthCheckTemplateAttributeRequest() {}

  explicit GetHealthCheckTemplateAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckTemplateId) {
      res["HealthCheckTemplateId"] = boost::any(*healthCheckTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckTemplateId") != m.end() && !m["HealthCheckTemplateId"].empty()) {
      healthCheckTemplateId = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateId"]));
    }
  }


  virtual ~GetHealthCheckTemplateAttributeRequest() = default;
};
class GetHealthCheckTemplateAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> healthCheckCodes{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> healthCheckHost{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<string> healthCheckTemplateId{};
  shared_ptr<string> healthCheckTemplateName{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> requestId{};
  shared_ptr<long> unhealthyThreshold{};

  GetHealthCheckTemplateAttributeResponseBody() {}

  explicit GetHealthCheckTemplateAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckCodes) {
      res["HealthCheckCodes"] = boost::any(*healthCheckCodes);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckHost) {
      res["HealthCheckHost"] = boost::any(*healthCheckHost);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckTemplateId) {
      res["HealthCheckTemplateId"] = boost::any(*healthCheckTemplateId);
    }
    if (healthCheckTemplateName) {
      res["HealthCheckTemplateName"] = boost::any(*healthCheckTemplateName);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckCodes") != m.end() && !m["HealthCheckCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckHost") != m.end() && !m["HealthCheckHost"].empty()) {
      healthCheckHost = make_shared<string>(boost::any_cast<string>(m["HealthCheckHost"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckTemplateId") != m.end() && !m["HealthCheckTemplateId"].empty()) {
      healthCheckTemplateId = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateId"]));
    }
    if (m.find("HealthCheckTemplateName") != m.end() && !m["HealthCheckTemplateName"].empty()) {
      healthCheckTemplateName = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateName"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~GetHealthCheckTemplateAttributeResponseBody() = default;
};
class GetHealthCheckTemplateAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHealthCheckTemplateAttributeResponseBody> body{};

  GetHealthCheckTemplateAttributeResponse() {}

  explicit GetHealthCheckTemplateAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHealthCheckTemplateAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHealthCheckTemplateAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetHealthCheckTemplateAttributeResponse() = default;
};
class GetListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};

  GetListenerAttributeRequest() {}

  explicit GetListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~GetListenerAttributeRequest() = default;
};
class GetListenerAttributeResponseBodyAclConfigAclRelations : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> status{};

  GetListenerAttributeResponseBodyAclConfigAclRelations() {}

  explicit GetListenerAttributeResponseBodyAclConfigAclRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyAclConfigAclRelations() = default;
};
class GetListenerAttributeResponseBodyAclConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetListenerAttributeResponseBodyAclConfigAclRelations>> aclRelations{};
  shared_ptr<string> aclType{};

  GetListenerAttributeResponseBodyAclConfig() {}

  explicit GetListenerAttributeResponseBodyAclConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclRelations) {
      vector<boost::any> temp1;
      for(auto item1:*aclRelations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclRelations"] = boost::any(temp1);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclRelations") != m.end() && !m["AclRelations"].empty()) {
      if (typeid(vector<boost::any>) == m["AclRelations"].type()) {
        vector<GetListenerAttributeResponseBodyAclConfigAclRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclRelations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerAttributeResponseBodyAclConfigAclRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclRelations = make_shared<vector<GetListenerAttributeResponseBodyAclConfigAclRelations>>(expect1);
      }
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyAclConfig() = default;
};
class GetListenerAttributeResponseBodyCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  GetListenerAttributeResponseBodyCertificates() {}

  explicit GetListenerAttributeResponseBodyCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyCertificates() = default;
};
class GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples() {}

  explicit GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples() = default;
};
class GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig() {}

  explicit GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig() = default;
};
class GetListenerAttributeResponseBodyDefaultActions : public Darabonba::Model {
public:
  shared_ptr<GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<string> type{};

  GetListenerAttributeResponseBodyDefaultActions() {}

  explicit GetListenerAttributeResponseBodyDefaultActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyDefaultActions() = default;
};
class GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig : public Darabonba::Model {
public:
  shared_ptr<bool> tracingEnabled{};
  shared_ptr<long> tracingSample{};
  shared_ptr<string> tracingType{};

  GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig() {}

  explicit GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tracingEnabled) {
      res["TracingEnabled"] = boost::any(*tracingEnabled);
    }
    if (tracingSample) {
      res["TracingSample"] = boost::any(*tracingSample);
    }
    if (tracingType) {
      res["TracingType"] = boost::any(*tracingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TracingEnabled") != m.end() && !m["TracingEnabled"].empty()) {
      tracingEnabled = make_shared<bool>(boost::any_cast<bool>(m["TracingEnabled"]));
    }
    if (m.find("TracingSample") != m.end() && !m["TracingSample"].empty()) {
      tracingSample = make_shared<long>(boost::any_cast<long>(m["TracingSample"]));
    }
    if (m.find("TracingType") != m.end() && !m["TracingType"].empty()) {
      tracingType = make_shared<string>(boost::any_cast<string>(m["TracingType"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig() = default;
};
class GetListenerAttributeResponseBodyLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled{};
  shared_ptr<GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig> accessLogTracingConfig{};

  GetListenerAttributeResponseBodyLogConfig() {}

  explicit GetListenerAttributeResponseBodyLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogRecordCustomizedHeadersEnabled) {
      res["AccessLogRecordCustomizedHeadersEnabled"] = boost::any(*accessLogRecordCustomizedHeadersEnabled);
    }
    if (accessLogTracingConfig) {
      res["AccessLogTracingConfig"] = accessLogTracingConfig ? boost::any(accessLogTracingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogRecordCustomizedHeadersEnabled") != m.end() && !m["AccessLogRecordCustomizedHeadersEnabled"].empty()) {
      accessLogRecordCustomizedHeadersEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogRecordCustomizedHeadersEnabled"]));
    }
    if (m.find("AccessLogTracingConfig") != m.end() && !m["AccessLogTracingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessLogTracingConfig"].type()) {
        GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessLogTracingConfig"]));
        accessLogTracingConfig = make_shared<GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig>(model1);
      }
    }
  }


  virtual ~GetListenerAttributeResponseBodyLogConfig() = default;
};
class GetListenerAttributeResponseBodyQuicConfig : public Darabonba::Model {
public:
  shared_ptr<string> quicListenerId{};
  shared_ptr<bool> quicUpgradeEnabled{};

  GetListenerAttributeResponseBodyQuicConfig() {}

  explicit GetListenerAttributeResponseBodyQuicConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quicListenerId) {
      res["QuicListenerId"] = boost::any(*quicListenerId);
    }
    if (quicUpgradeEnabled) {
      res["QuicUpgradeEnabled"] = boost::any(*quicUpgradeEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuicListenerId") != m.end() && !m["QuicListenerId"].empty()) {
      quicListenerId = make_shared<string>(boost::any_cast<string>(m["QuicListenerId"]));
    }
    if (m.find("QuicUpgradeEnabled") != m.end() && !m["QuicUpgradeEnabled"].empty()) {
      quicUpgradeEnabled = make_shared<bool>(boost::any_cast<bool>(m["QuicUpgradeEnabled"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyQuicConfig() = default;
};
class GetListenerAttributeResponseBodyXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<string> XForwardedForClientCertClientVerifyAlias{};
  shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled{};
  shared_ptr<string> XForwardedForClientCertFingerprintAlias{};
  shared_ptr<bool> XForwardedForClientCertFingerprintEnabled{};
  shared_ptr<string> XForwardedForClientCertIssuerDNAlias{};
  shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled{};
  shared_ptr<string> XForwardedForClientCertSubjectDNAlias{};
  shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled{};
  shared_ptr<bool> XForwardedForClientSrcPortEnabled{};
  shared_ptr<bool> XForwardedForEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForSLBIdEnabled{};
  shared_ptr<bool> XForwardedForSLBPortEnabled{};

  GetListenerAttributeResponseBodyXForwardedForConfig() {}

  explicit GetListenerAttributeResponseBodyXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForClientCertClientVerifyAlias) {
      res["XForwardedForClientCertClientVerifyAlias"] = boost::any(*XForwardedForClientCertClientVerifyAlias);
    }
    if (XForwardedForClientCertClientVerifyEnabled) {
      res["XForwardedForClientCertClientVerifyEnabled"] = boost::any(*XForwardedForClientCertClientVerifyEnabled);
    }
    if (XForwardedForClientCertFingerprintAlias) {
      res["XForwardedForClientCertFingerprintAlias"] = boost::any(*XForwardedForClientCertFingerprintAlias);
    }
    if (XForwardedForClientCertFingerprintEnabled) {
      res["XForwardedForClientCertFingerprintEnabled"] = boost::any(*XForwardedForClientCertFingerprintEnabled);
    }
    if (XForwardedForClientCertIssuerDNAlias) {
      res["XForwardedForClientCertIssuerDNAlias"] = boost::any(*XForwardedForClientCertIssuerDNAlias);
    }
    if (XForwardedForClientCertIssuerDNEnabled) {
      res["XForwardedForClientCertIssuerDNEnabled"] = boost::any(*XForwardedForClientCertIssuerDNEnabled);
    }
    if (XForwardedForClientCertSubjectDNAlias) {
      res["XForwardedForClientCertSubjectDNAlias"] = boost::any(*XForwardedForClientCertSubjectDNAlias);
    }
    if (XForwardedForClientCertSubjectDNEnabled) {
      res["XForwardedForClientCertSubjectDNEnabled"] = boost::any(*XForwardedForClientCertSubjectDNEnabled);
    }
    if (XForwardedForClientSrcPortEnabled) {
      res["XForwardedForClientSrcPortEnabled"] = boost::any(*XForwardedForClientSrcPortEnabled);
    }
    if (XForwardedForEnabled) {
      res["XForwardedForEnabled"] = boost::any(*XForwardedForEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForSLBIdEnabled) {
      res["XForwardedForSLBIdEnabled"] = boost::any(*XForwardedForSLBIdEnabled);
    }
    if (XForwardedForSLBPortEnabled) {
      res["XForwardedForSLBPortEnabled"] = boost::any(*XForwardedForSLBPortEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForClientCertClientVerifyAlias") != m.end() && !m["XForwardedForClientCertClientVerifyAlias"].empty()) {
      XForwardedForClientCertClientVerifyAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertClientVerifyAlias"]));
    }
    if (m.find("XForwardedForClientCertClientVerifyEnabled") != m.end() && !m["XForwardedForClientCertClientVerifyEnabled"].empty()) {
      XForwardedForClientCertClientVerifyEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertClientVerifyEnabled"]));
    }
    if (m.find("XForwardedForClientCertFingerprintAlias") != m.end() && !m["XForwardedForClientCertFingerprintAlias"].empty()) {
      XForwardedForClientCertFingerprintAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertFingerprintAlias"]));
    }
    if (m.find("XForwardedForClientCertFingerprintEnabled") != m.end() && !m["XForwardedForClientCertFingerprintEnabled"].empty()) {
      XForwardedForClientCertFingerprintEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertFingerprintEnabled"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNAlias") != m.end() && !m["XForwardedForClientCertIssuerDNAlias"].empty()) {
      XForwardedForClientCertIssuerDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertIssuerDNAlias"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNEnabled") != m.end() && !m["XForwardedForClientCertIssuerDNEnabled"].empty()) {
      XForwardedForClientCertIssuerDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertIssuerDNEnabled"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNAlias") != m.end() && !m["XForwardedForClientCertSubjectDNAlias"].empty()) {
      XForwardedForClientCertSubjectDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertSubjectDNAlias"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNEnabled") != m.end() && !m["XForwardedForClientCertSubjectDNEnabled"].empty()) {
      XForwardedForClientCertSubjectDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertSubjectDNEnabled"]));
    }
    if (m.find("XForwardedForClientSrcPortEnabled") != m.end() && !m["XForwardedForClientSrcPortEnabled"].empty()) {
      XForwardedForClientSrcPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientSrcPortEnabled"]));
    }
    if (m.find("XForwardedForEnabled") != m.end() && !m["XForwardedForEnabled"].empty()) {
      XForwardedForEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForSLBIdEnabled") != m.end() && !m["XForwardedForSLBIdEnabled"].empty()) {
      XForwardedForSLBIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBIdEnabled"]));
    }
    if (m.find("XForwardedForSLBPortEnabled") != m.end() && !m["XForwardedForSLBPortEnabled"].empty()) {
      XForwardedForSLBPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBPortEnabled"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyXForwardedForConfig() = default;
};
class GetListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetListenerAttributeResponseBodyAclConfig> aclConfig{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<GetListenerAttributeResponseBodyCertificates>> certificates{};
  shared_ptr<vector<GetListenerAttributeResponseBodyDefaultActions>> defaultActions{};
  shared_ptr<bool> gzipEnabled{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> listenerStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<GetListenerAttributeResponseBodyLogConfig> logConfig{};
  shared_ptr<GetListenerAttributeResponseBodyQuicConfig> quicConfig{};
  shared_ptr<string> requestId{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<GetListenerAttributeResponseBodyXForwardedForConfig> XForwardedForConfig{};

  GetListenerAttributeResponseBody() {}

  explicit GetListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclConfig) {
      res["AclConfig"] = aclConfig ? boost::any(aclConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (defaultActions) {
      vector<boost::any> temp1;
      for(auto item1:*defaultActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DefaultActions"] = boost::any(temp1);
    }
    if (gzipEnabled) {
      res["GzipEnabled"] = boost::any(*gzipEnabled);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (listenerStatus) {
      res["ListenerStatus"] = boost::any(*listenerStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (logConfig) {
      res["LogConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quicConfig) {
      res["QuicConfig"] = quicConfig ? boost::any(quicConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclConfig") != m.end() && !m["AclConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AclConfig"].type()) {
        GetListenerAttributeResponseBodyAclConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AclConfig"]));
        aclConfig = make_shared<GetListenerAttributeResponseBodyAclConfig>(model1);
      }
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<GetListenerAttributeResponseBodyCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerAttributeResponseBodyCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<GetListenerAttributeResponseBodyCertificates>>(expect1);
      }
    }
    if (m.find("DefaultActions") != m.end() && !m["DefaultActions"].empty()) {
      if (typeid(vector<boost::any>) == m["DefaultActions"].type()) {
        vector<GetListenerAttributeResponseBodyDefaultActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DefaultActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerAttributeResponseBodyDefaultActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        defaultActions = make_shared<vector<GetListenerAttributeResponseBodyDefaultActions>>(expect1);
      }
    }
    if (m.find("GzipEnabled") != m.end() && !m["GzipEnabled"].empty()) {
      gzipEnabled = make_shared<bool>(boost::any_cast<bool>(m["GzipEnabled"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ListenerStatus") != m.end() && !m["ListenerStatus"].empty()) {
      listenerStatus = make_shared<string>(boost::any_cast<string>(m["ListenerStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LogConfig") != m.end() && !m["LogConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogConfig"].type()) {
        GetListenerAttributeResponseBodyLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogConfig"]));
        logConfig = make_shared<GetListenerAttributeResponseBodyLogConfig>(model1);
      }
    }
    if (m.find("QuicConfig") != m.end() && !m["QuicConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuicConfig"].type()) {
        GetListenerAttributeResponseBodyQuicConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuicConfig"]));
        quicConfig = make_shared<GetListenerAttributeResponseBodyQuicConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        GetListenerAttributeResponseBodyXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<GetListenerAttributeResponseBodyXForwardedForConfig>(model1);
      }
    }
  }


  virtual ~GetListenerAttributeResponseBody() = default;
};
class GetListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetListenerAttributeResponseBody> body{};

  GetListenerAttributeResponse() {}

  explicit GetListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetListenerAttributeResponse() = default;
};
class GetListenerHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includeRule{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  GetListenerHealthStatusRequest() {}

  explicit GetListenerHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeRule) {
      res["IncludeRule"] = boost::any(*includeRule);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncludeRule") != m.end() && !m["IncludeRule"].empty()) {
      includeRule = make_shared<bool>(boost::any_cast<bool>(m["IncludeRule"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetListenerHealthStatusRequest() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason : public Darabonba::Model {
public:
  shared_ptr<string> actualResponse{};
  shared_ptr<string> expectedResponse{};
  shared_ptr<string> reasonCode{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualResponse) {
      res["ActualResponse"] = boost::any(*actualResponse);
    }
    if (expectedResponse) {
      res["ExpectedResponse"] = boost::any(*expectedResponse);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualResponse") != m.end() && !m["ActualResponse"].empty()) {
      actualResponse = make_shared<string>(boost::any_cast<string>(m["ActualResponse"]));
    }
    if (m.find("ExpectedResponse") != m.end() && !m["ExpectedResponse"].empty()) {
      expectedResponse = make_shared<string>(boost::any_cast<string>(m["ExpectedResponse"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason> reason{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> status{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (reason) {
      res["Reason"] = reason ? boost::any(reason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reason"].type()) {
        GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason>(model1);
      }
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> healthCheckEnabled{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>> nonNormalServers{};
  shared_ptr<string> serverGroupId{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (nonNormalServers) {
      vector<boost::any> temp1;
      for(auto item1:*nonNormalServers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NonNormalServers"] = boost::any(temp1);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<string>(boost::any_cast<string>(m["HealthCheckEnabled"]));
    }
    if (m.find("NonNormalServers") != m.end() && !m["NonNormalServers"].empty()) {
      if (typeid(vector<boost::any>) == m["NonNormalServers"].type()) {
        vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NonNormalServers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nonNormalServers = make_shared<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>>(expect1);
      }
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatus : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos>> serverGroupInfos{};

  GetListenerHealthStatusResponseBodyListenerHealthStatus() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (serverGroupInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ServerGroupInfos") != m.end() && !m["ServerGroupInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupInfos"].type()) {
        vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupInfos = make_shared<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos>>(expect1);
      }
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatus() = default;
};
class GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason : public Darabonba::Model {
public:
  shared_ptr<string> actualResponse{};
  shared_ptr<string> expectedResponse{};
  shared_ptr<string> reasonCode{};

  GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason() {}

  explicit GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualResponse) {
      res["ActualResponse"] = boost::any(*actualResponse);
    }
    if (expectedResponse) {
      res["ExpectedResponse"] = boost::any(*expectedResponse);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualResponse") != m.end() && !m["ActualResponse"].empty()) {
      actualResponse = make_shared<string>(boost::any_cast<string>(m["ActualResponse"]));
    }
    if (m.find("ExpectedResponse") != m.end() && !m["ExpectedResponse"].empty()) {
      expectedResponse = make_shared<string>(boost::any_cast<string>(m["ExpectedResponse"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason() = default;
};
class GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason> reason{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> status{};

  GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers() {}

  explicit GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (reason) {
      res["Reason"] = reason ? boost::any(reason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reason"].type()) {
        GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason>(model1);
      }
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers() = default;
};
class GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> healthCheckEnabled{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers>> nonNormalServers{};
  shared_ptr<string> serverGroupId{};

  GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos() {}

  explicit GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (nonNormalServers) {
      vector<boost::any> temp1;
      for(auto item1:*nonNormalServers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NonNormalServers"] = boost::any(temp1);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<string>(boost::any_cast<string>(m["HealthCheckEnabled"]));
    }
    if (m.find("NonNormalServers") != m.end() && !m["NonNormalServers"].empty()) {
      if (typeid(vector<boost::any>) == m["NonNormalServers"].type()) {
        vector<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NonNormalServers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nonNormalServers = make_shared<vector<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServers>>(expect1);
      }
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos() = default;
};
class GetListenerHealthStatusResponseBodyRuleHealthStatus : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos>> serverGroupInfos{};

  GetListenerHealthStatusResponseBodyRuleHealthStatus() {}

  explicit GetListenerHealthStatusResponseBodyRuleHealthStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (serverGroupInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ServerGroupInfos") != m.end() && !m["ServerGroupInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupInfos"].type()) {
        vector<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupInfos = make_shared<vector<GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos>>(expect1);
      }
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyRuleHealthStatus() = default;
};
class GetListenerHealthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>> listenerHealthStatus{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyRuleHealthStatus>> ruleHealthStatus{};

  GetListenerHealthStatusResponseBody() {}

  explicit GetListenerHealthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerHealthStatus) {
      vector<boost::any> temp1;
      for(auto item1:*listenerHealthStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListenerHealthStatus"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHealthStatus) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHealthStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHealthStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerHealthStatus") != m.end() && !m["ListenerHealthStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["ListenerHealthStatus"].type()) {
        vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListenerHealthStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyListenerHealthStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listenerHealthStatus = make_shared<vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHealthStatus") != m.end() && !m["RuleHealthStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHealthStatus"].type()) {
        vector<GetListenerHealthStatusResponseBodyRuleHealthStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHealthStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyRuleHealthStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHealthStatus = make_shared<vector<GetListenerHealthStatusResponseBodyRuleHealthStatus>>(expect1);
      }
    }
  }


  virtual ~GetListenerHealthStatusResponseBody() = default;
};
class GetListenerHealthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetListenerHealthStatusResponseBody> body{};

  GetListenerHealthStatusResponse() {}

  explicit GetListenerHealthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetListenerHealthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetListenerHealthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetListenerHealthStatusResponse() = default;
};
class GetLoadBalancerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> loadBalancerId{};

  GetLoadBalancerAttributeRequest() {}

  explicit GetLoadBalancerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~GetLoadBalancerAttributeRequest() = default;
};
class GetLoadBalancerAttributeResponseBodyAccessLogConfig : public Darabonba::Model {
public:
  shared_ptr<string> logProject{};
  shared_ptr<string> logStore{};

  GetLoadBalancerAttributeResponseBodyAccessLogConfig() {}

  explicit GetLoadBalancerAttributeResponseBodyAccessLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyAccessLogConfig() = default;
};
class GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> enabledTime{};

  GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig() {}

  explicit GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (enabledTime) {
      res["EnabledTime"] = boost::any(*enabledTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EnabledTime") != m.end() && !m["EnabledTime"].empty()) {
      enabledTime = make_shared<string>(boost::any_cast<string>(m["EnabledTime"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig() = default;
};
class GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig : public Darabonba::Model {
public:
  shared_ptr<string> payType{};

  GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig() {}

  explicit GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig() = default;
};
class GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks : public Darabonba::Model {
public:
  shared_ptr<string> lockReason{};
  shared_ptr<string> lockType{};

  GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks() {}

  explicit GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (lockType) {
      res["LockType"] = boost::any(*lockType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("LockType") != m.end() && !m["LockType"].empty()) {
      lockType = make_shared<string>(boost::any_cast<string>(m["LockType"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks() = default;
};
class GetLoadBalancerAttributeResponseBodyModificationProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() {}

  explicit GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() = default;
};
class GetLoadBalancerAttributeResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetLoadBalancerAttributeResponseBodyTags() {}

  explicit GetLoadBalancerAttributeResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyTags() = default;
};
class GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> ipv6Address{};

  GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() {}

  explicit GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (ipv6Address) {
      res["Ipv6Address"] = boost::any(*ipv6Address);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Ipv6Address") != m.end() && !m["Ipv6Address"].empty()) {
      ipv6Address = make_shared<string>(boost::any_cast<string>(m["Ipv6Address"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() = default;
};
class GetLoadBalancerAttributeResponseBodyZoneMappings : public Darabonba::Model {
public:
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>> loadBalancerAddresses{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  GetLoadBalancerAttributeResponseBodyZoneMappings() {}

  explicit GetLoadBalancerAttributeResponseBodyZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerAddresses) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancerAddresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancerAddresses"] = boost::any(temp1);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerAddresses") != m.end() && !m["LoadBalancerAddresses"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancerAddresses"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancerAddresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancerAddresses = make_shared<vector<GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyZoneMappings() = default;
};
class GetLoadBalancerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetLoadBalancerAttributeResponseBodyAccessLogConfig> accessLogConfig{};
  shared_ptr<string> addressAllocatedMode{};
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DNSName{};
  shared_ptr<GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig> deletionProtectionConfig{};
  shared_ptr<string> ipv6AddressType{};
  shared_ptr<GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig> loadBalancerBillingConfig{};
  shared_ptr<string> loadBalancerBussinessStatus{};
  shared_ptr<string> loadBalancerEdition{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks>> loadBalancerOperationLocks{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<GetLoadBalancerAttributeResponseBodyModificationProtectionConfig> modificationProtectionConfig{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyTags>> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyZoneMappings>> zoneMappings{};

  GetLoadBalancerAttributeResponseBody() {}

  explicit GetLoadBalancerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogConfig) {
      res["AccessLogConfig"] = accessLogConfig ? boost::any(accessLogConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressAllocatedMode) {
      res["AddressAllocatedMode"] = boost::any(*addressAllocatedMode);
    }
    if (addressIpVersion) {
      res["AddressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DNSName) {
      res["DNSName"] = boost::any(*DNSName);
    }
    if (deletionProtectionConfig) {
      res["DeletionProtectionConfig"] = deletionProtectionConfig ? boost::any(deletionProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ipv6AddressType) {
      res["Ipv6AddressType"] = boost::any(*ipv6AddressType);
    }
    if (loadBalancerBillingConfig) {
      res["LoadBalancerBillingConfig"] = loadBalancerBillingConfig ? boost::any(loadBalancerBillingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancerBussinessStatus) {
      res["LoadBalancerBussinessStatus"] = boost::any(*loadBalancerBussinessStatus);
    }
    if (loadBalancerEdition) {
      res["LoadBalancerEdition"] = boost::any(*loadBalancerEdition);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (loadBalancerOperationLocks) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancerOperationLocks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancerOperationLocks"] = boost::any(temp1);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (modificationProtectionConfig) {
      res["ModificationProtectionConfig"] = modificationProtectionConfig ? boost::any(modificationProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogConfig") != m.end() && !m["AccessLogConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessLogConfig"].type()) {
        GetLoadBalancerAttributeResponseBodyAccessLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessLogConfig"]));
        accessLogConfig = make_shared<GetLoadBalancerAttributeResponseBodyAccessLogConfig>(model1);
      }
    }
    if (m.find("AddressAllocatedMode") != m.end() && !m["AddressAllocatedMode"].empty()) {
      addressAllocatedMode = make_shared<string>(boost::any_cast<string>(m["AddressAllocatedMode"]));
    }
    if (m.find("AddressIpVersion") != m.end() && !m["AddressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["AddressIpVersion"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DNSName") != m.end() && !m["DNSName"].empty()) {
      DNSName = make_shared<string>(boost::any_cast<string>(m["DNSName"]));
    }
    if (m.find("DeletionProtectionConfig") != m.end() && !m["DeletionProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeletionProtectionConfig"].type()) {
        GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeletionProtectionConfig"]));
        deletionProtectionConfig = make_shared<GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig>(model1);
      }
    }
    if (m.find("Ipv6AddressType") != m.end() && !m["Ipv6AddressType"].empty()) {
      ipv6AddressType = make_shared<string>(boost::any_cast<string>(m["Ipv6AddressType"]));
    }
    if (m.find("LoadBalancerBillingConfig") != m.end() && !m["LoadBalancerBillingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerBillingConfig"].type()) {
        GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerBillingConfig"]));
        loadBalancerBillingConfig = make_shared<GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig>(model1);
      }
    }
    if (m.find("LoadBalancerBussinessStatus") != m.end() && !m["LoadBalancerBussinessStatus"].empty()) {
      loadBalancerBussinessStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerBussinessStatus"]));
    }
    if (m.find("LoadBalancerEdition") != m.end() && !m["LoadBalancerEdition"].empty()) {
      loadBalancerEdition = make_shared<string>(boost::any_cast<string>(m["LoadBalancerEdition"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("LoadBalancerOperationLocks") != m.end() && !m["LoadBalancerOperationLocks"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancerOperationLocks"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancerOperationLocks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancerOperationLocks = make_shared<vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks>>(expect1);
      }
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("ModificationProtectionConfig") != m.end() && !m["ModificationProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModificationProtectionConfig"].type()) {
        GetLoadBalancerAttributeResponseBodyModificationProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModificationProtectionConfig"]));
        modificationProtectionConfig = make_shared<GetLoadBalancerAttributeResponseBodyModificationProtectionConfig>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetLoadBalancerAttributeResponseBodyTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<GetLoadBalancerAttributeResponseBodyZoneMappings>>(expect1);
      }
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBody() = default;
};
class GetLoadBalancerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLoadBalancerAttributeResponseBody> body{};

  GetLoadBalancerAttributeResponse() {}

  explicit GetLoadBalancerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLoadBalancerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoadBalancerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoadBalancerAttributeResponse() = default;
};
class ListAclEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListAclEntriesRequest() {}

  explicit ListAclEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListAclEntriesRequest() = default;
};
class ListAclEntriesResponseBodyAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> entry{};
  shared_ptr<string> status{};

  ListAclEntriesResponseBodyAclEntries() {}

  explicit ListAclEntriesResponseBodyAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAclEntriesResponseBodyAclEntries() = default;
};
class ListAclEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAclEntriesResponseBodyAclEntries>> aclEntries{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAclEntriesResponseBody() {}

  explicit ListAclEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<ListAclEntriesResponseBodyAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclEntriesResponseBodyAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<ListAclEntriesResponseBodyAclEntries>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAclEntriesResponseBody() = default;
};
class ListAclEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAclEntriesResponseBody> body{};

  ListAclEntriesResponse() {}

  explicit ListAclEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAclEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAclEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAclEntriesResponse() = default;
};
class ListAclRelationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aclIds{};

  ListAclRelationsRequest() {}

  explicit ListAclRelationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAclRelationsRequest() = default;
};
class ListAclRelationsResponseBodyAclRelationsRelatedListeners : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> status{};

  ListAclRelationsResponseBodyAclRelationsRelatedListeners() {}

  explicit ListAclRelationsResponseBodyAclRelationsRelatedListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAclRelationsResponseBodyAclRelationsRelatedListeners() = default;
};
class ListAclRelationsResponseBodyAclRelations : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<vector<ListAclRelationsResponseBodyAclRelationsRelatedListeners>> relatedListeners{};

  ListAclRelationsResponseBodyAclRelations() {}

  explicit ListAclRelationsResponseBodyAclRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (relatedListeners) {
      vector<boost::any> temp1;
      for(auto item1:*relatedListeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedListeners"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("RelatedListeners") != m.end() && !m["RelatedListeners"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedListeners"].type()) {
        vector<ListAclRelationsResponseBodyAclRelationsRelatedListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedListeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclRelationsResponseBodyAclRelationsRelatedListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedListeners = make_shared<vector<ListAclRelationsResponseBodyAclRelationsRelatedListeners>>(expect1);
      }
    }
  }


  virtual ~ListAclRelationsResponseBodyAclRelations() = default;
};
class ListAclRelationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAclRelationsResponseBodyAclRelations>> aclRelations{};
  shared_ptr<string> requestId{};

  ListAclRelationsResponseBody() {}

  explicit ListAclRelationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclRelations) {
      vector<boost::any> temp1;
      for(auto item1:*aclRelations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclRelations"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclRelations") != m.end() && !m["AclRelations"].empty()) {
      if (typeid(vector<boost::any>) == m["AclRelations"].type()) {
        vector<ListAclRelationsResponseBodyAclRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclRelations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclRelationsResponseBodyAclRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclRelations = make_shared<vector<ListAclRelationsResponseBodyAclRelations>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAclRelationsResponseBody() = default;
};
class ListAclRelationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAclRelationsResponseBody> body{};

  ListAclRelationsResponse() {}

  explicit ListAclRelationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAclRelationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAclRelationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAclRelationsResponse() = default;
};
class ListAclsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<vector<string>> aclNames{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};

  ListAclsRequest() {}

  explicit ListAclsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (aclNames) {
      res["AclNames"] = boost::any(*aclNames);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AclNames") != m.end() && !m["AclNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListAclsRequest() = default;
};
class ListAclsResponseBodyAcls : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> aclName{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<bool> configManagedEnabled{};
  shared_ptr<string> resourceGroupId{};

  ListAclsResponseBodyAcls() {}

  explicit ListAclsResponseBodyAcls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (configManagedEnabled) {
      res["ConfigManagedEnabled"] = boost::any(*configManagedEnabled);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("ConfigManagedEnabled") != m.end() && !m["ConfigManagedEnabled"].empty()) {
      configManagedEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigManagedEnabled"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListAclsResponseBodyAcls() = default;
};
class ListAclsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAclsResponseBodyAcls>> acls{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAclsResponseBody() {}

  explicit ListAclsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acls) {
      vector<boost::any> temp1;
      for(auto item1:*acls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Acls"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acls") != m.end() && !m["Acls"].empty()) {
      if (typeid(vector<boost::any>) == m["Acls"].type()) {
        vector<ListAclsResponseBodyAcls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Acls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclsResponseBodyAcls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acls = make_shared<vector<ListAclsResponseBodyAcls>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAclsResponseBody() = default;
};
class ListAclsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAclsResponseBody> body{};

  ListAclsResponse() {}

  explicit ListAclsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAclsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAclsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAclsResponse() = default;
};
class ListAsynJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> jobIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  ListAsynJobsRequest() {}

  explicit ListAsynJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JobIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListAsynJobsRequest() = default;
};
class ListAsynJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> operateType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};

  ListAsynJobsResponseBodyJobs() {}

  explicit ListAsynJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAsynJobsResponseBodyJobs() = default;
};
class ListAsynJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAsynJobsResponseBodyJobs>> jobs{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAsynJobsResponseBody() {}

  explicit ListAsynJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<ListAsynJobsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAsynJobsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListAsynJobsResponseBodyJobs>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAsynJobsResponseBody() = default;
};
class ListAsynJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAsynJobsResponseBody> body{};

  ListAsynJobsResponse() {}

  explicit ListAsynJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAsynJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAsynJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAsynJobsResponse() = default;
};
class ListHealthCheckTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> healthCheckTemplateIds{};
  shared_ptr<vector<string>> healthCheckTemplateNames{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListHealthCheckTemplatesRequest() {}

  explicit ListHealthCheckTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckTemplateIds) {
      res["HealthCheckTemplateIds"] = boost::any(*healthCheckTemplateIds);
    }
    if (healthCheckTemplateNames) {
      res["HealthCheckTemplateNames"] = boost::any(*healthCheckTemplateNames);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckTemplateIds") != m.end() && !m["HealthCheckTemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckTemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckTemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckTemplateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckTemplateNames") != m.end() && !m["HealthCheckTemplateNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckTemplateNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckTemplateNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckTemplateNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListHealthCheckTemplatesRequest() = default;
};
class ListHealthCheckTemplatesResponseBodyHealthCheckTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<string>> healthCheckCodes{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> healthCheckHost{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<string> healthCheckTemplateId{};
  shared_ptr<string> healthCheckTemplateName{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};

  ListHealthCheckTemplatesResponseBodyHealthCheckTemplates() {}

  explicit ListHealthCheckTemplatesResponseBodyHealthCheckTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckCodes) {
      res["HealthCheckCodes"] = boost::any(*healthCheckCodes);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckHost) {
      res["HealthCheckHost"] = boost::any(*healthCheckHost);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckTemplateId) {
      res["HealthCheckTemplateId"] = boost::any(*healthCheckTemplateId);
    }
    if (healthCheckTemplateName) {
      res["HealthCheckTemplateName"] = boost::any(*healthCheckTemplateName);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckCodes") != m.end() && !m["HealthCheckCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckHost") != m.end() && !m["HealthCheckHost"].empty()) {
      healthCheckHost = make_shared<string>(boost::any_cast<string>(m["HealthCheckHost"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckTemplateId") != m.end() && !m["HealthCheckTemplateId"].empty()) {
      healthCheckTemplateId = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateId"]));
    }
    if (m.find("HealthCheckTemplateName") != m.end() && !m["HealthCheckTemplateName"].empty()) {
      healthCheckTemplateName = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateName"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~ListHealthCheckTemplatesResponseBodyHealthCheckTemplates() = default;
};
class ListHealthCheckTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates>> healthCheckTemplates{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListHealthCheckTemplatesResponseBody() {}

  explicit ListHealthCheckTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*healthCheckTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HealthCheckTemplates"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckTemplates") != m.end() && !m["HealthCheckTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["HealthCheckTemplates"].type()) {
        vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HealthCheckTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHealthCheckTemplatesResponseBodyHealthCheckTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        healthCheckTemplates = make_shared<vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListHealthCheckTemplatesResponseBody() = default;
};
class ListHealthCheckTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHealthCheckTemplatesResponseBody> body{};

  ListHealthCheckTemplatesResponse() {}

  explicit ListHealthCheckTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHealthCheckTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHealthCheckTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHealthCheckTemplatesResponse() = default;
};
class ListListenerCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateType{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListListenerCertificatesRequest() {}

  explicit ListListenerCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListListenerCertificatesRequest() = default;
};
class ListListenerCertificatesResponseBodyCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateType{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};

  ListListenerCertificatesResponseBodyCertificates() {}

  explicit ListListenerCertificatesResponseBodyCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListListenerCertificatesResponseBodyCertificates() = default;
};
class ListListenerCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListListenerCertificatesResponseBodyCertificates>> certificates{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListListenerCertificatesResponseBody() {}

  explicit ListListenerCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<ListListenerCertificatesResponseBodyCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenerCertificatesResponseBodyCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<ListListenerCertificatesResponseBodyCertificates>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListListenerCertificatesResponseBody() = default;
};
class ListListenerCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenerCertificatesResponseBody> body{};

  ListListenerCertificatesResponse() {}

  explicit ListListenerCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenerCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenerCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenerCertificatesResponse() = default;
};
class ListListenersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> listenerIds{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<vector<string>> loadBalancerIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListListenersRequest() {}

  explicit ListListenersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerIds) {
      res["ListenerIds"] = boost::any(*listenerIds);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerIds") != m.end() && !m["ListenerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ListenerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ListenerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listenerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListListenersRequest() = default;
};
class ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples() {}

  explicit ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples() = default;
};
class ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig() {}

  explicit ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig() = default;
};
class ListListenersResponseBodyListenersDefaultActions : public Darabonba::Model {
public:
  shared_ptr<ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<string> type{};

  ListListenersResponseBodyListenersDefaultActions() {}

  explicit ListListenersResponseBodyListenersDefaultActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersDefaultActions() = default;
};
class ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig : public Darabonba::Model {
public:
  shared_ptr<bool> tracingEnabled{};
  shared_ptr<long> tracingSample{};
  shared_ptr<string> tracingType{};

  ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig() {}

  explicit ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tracingEnabled) {
      res["TracingEnabled"] = boost::any(*tracingEnabled);
    }
    if (tracingSample) {
      res["TracingSample"] = boost::any(*tracingSample);
    }
    if (tracingType) {
      res["TracingType"] = boost::any(*tracingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TracingEnabled") != m.end() && !m["TracingEnabled"].empty()) {
      tracingEnabled = make_shared<bool>(boost::any_cast<bool>(m["TracingEnabled"]));
    }
    if (m.find("TracingSample") != m.end() && !m["TracingSample"].empty()) {
      tracingSample = make_shared<long>(boost::any_cast<long>(m["TracingSample"]));
    }
    if (m.find("TracingType") != m.end() && !m["TracingType"].empty()) {
      tracingType = make_shared<string>(boost::any_cast<string>(m["TracingType"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig() = default;
};
class ListListenersResponseBodyListenersLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled{};
  shared_ptr<ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig> accessLogTracingConfig{};

  ListListenersResponseBodyListenersLogConfig() {}

  explicit ListListenersResponseBodyListenersLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogRecordCustomizedHeadersEnabled) {
      res["AccessLogRecordCustomizedHeadersEnabled"] = boost::any(*accessLogRecordCustomizedHeadersEnabled);
    }
    if (accessLogTracingConfig) {
      res["AccessLogTracingConfig"] = accessLogTracingConfig ? boost::any(accessLogTracingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogRecordCustomizedHeadersEnabled") != m.end() && !m["AccessLogRecordCustomizedHeadersEnabled"].empty()) {
      accessLogRecordCustomizedHeadersEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogRecordCustomizedHeadersEnabled"]));
    }
    if (m.find("AccessLogTracingConfig") != m.end() && !m["AccessLogTracingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessLogTracingConfig"].type()) {
        ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessLogTracingConfig"]));
        accessLogTracingConfig = make_shared<ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig>(model1);
      }
    }
  }


  virtual ~ListListenersResponseBodyListenersLogConfig() = default;
};
class ListListenersResponseBodyListenersQuicConfig : public Darabonba::Model {
public:
  shared_ptr<string> quicListenerId{};
  shared_ptr<bool> quicUpgradeEnabled{};

  ListListenersResponseBodyListenersQuicConfig() {}

  explicit ListListenersResponseBodyListenersQuicConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quicListenerId) {
      res["QuicListenerId"] = boost::any(*quicListenerId);
    }
    if (quicUpgradeEnabled) {
      res["QuicUpgradeEnabled"] = boost::any(*quicUpgradeEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuicListenerId") != m.end() && !m["QuicListenerId"].empty()) {
      quicListenerId = make_shared<string>(boost::any_cast<string>(m["QuicListenerId"]));
    }
    if (m.find("QuicUpgradeEnabled") != m.end() && !m["QuicUpgradeEnabled"].empty()) {
      quicUpgradeEnabled = make_shared<bool>(boost::any_cast<bool>(m["QuicUpgradeEnabled"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersQuicConfig() = default;
};
class ListListenersResponseBodyListenersXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<string> XForwardedForClientCertClientVerifyAlias{};
  shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled{};
  shared_ptr<string> XForwardedForClientCertFingerprintAlias{};
  shared_ptr<bool> XForwardedForClientCertFingerprintEnabled{};
  shared_ptr<string> XForwardedForClientCertIssuerDNAlias{};
  shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled{};
  shared_ptr<string> XForwardedForClientCertSubjectDNAlias{};
  shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled{};
  shared_ptr<bool> XForwardedForClientSrcPortEnabled{};
  shared_ptr<bool> XForwardedForEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForSLBIdEnabled{};
  shared_ptr<bool> XForwardedForSLBPortEnabled{};

  ListListenersResponseBodyListenersXForwardedForConfig() {}

  explicit ListListenersResponseBodyListenersXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForClientCertClientVerifyAlias) {
      res["XForwardedForClientCertClientVerifyAlias"] = boost::any(*XForwardedForClientCertClientVerifyAlias);
    }
    if (XForwardedForClientCertClientVerifyEnabled) {
      res["XForwardedForClientCertClientVerifyEnabled"] = boost::any(*XForwardedForClientCertClientVerifyEnabled);
    }
    if (XForwardedForClientCertFingerprintAlias) {
      res["XForwardedForClientCertFingerprintAlias"] = boost::any(*XForwardedForClientCertFingerprintAlias);
    }
    if (XForwardedForClientCertFingerprintEnabled) {
      res["XForwardedForClientCertFingerprintEnabled"] = boost::any(*XForwardedForClientCertFingerprintEnabled);
    }
    if (XForwardedForClientCertIssuerDNAlias) {
      res["XForwardedForClientCertIssuerDNAlias"] = boost::any(*XForwardedForClientCertIssuerDNAlias);
    }
    if (XForwardedForClientCertIssuerDNEnabled) {
      res["XForwardedForClientCertIssuerDNEnabled"] = boost::any(*XForwardedForClientCertIssuerDNEnabled);
    }
    if (XForwardedForClientCertSubjectDNAlias) {
      res["XForwardedForClientCertSubjectDNAlias"] = boost::any(*XForwardedForClientCertSubjectDNAlias);
    }
    if (XForwardedForClientCertSubjectDNEnabled) {
      res["XForwardedForClientCertSubjectDNEnabled"] = boost::any(*XForwardedForClientCertSubjectDNEnabled);
    }
    if (XForwardedForClientSrcPortEnabled) {
      res["XForwardedForClientSrcPortEnabled"] = boost::any(*XForwardedForClientSrcPortEnabled);
    }
    if (XForwardedForEnabled) {
      res["XForwardedForEnabled"] = boost::any(*XForwardedForEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForSLBIdEnabled) {
      res["XForwardedForSLBIdEnabled"] = boost::any(*XForwardedForSLBIdEnabled);
    }
    if (XForwardedForSLBPortEnabled) {
      res["XForwardedForSLBPortEnabled"] = boost::any(*XForwardedForSLBPortEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForClientCertClientVerifyAlias") != m.end() && !m["XForwardedForClientCertClientVerifyAlias"].empty()) {
      XForwardedForClientCertClientVerifyAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertClientVerifyAlias"]));
    }
    if (m.find("XForwardedForClientCertClientVerifyEnabled") != m.end() && !m["XForwardedForClientCertClientVerifyEnabled"].empty()) {
      XForwardedForClientCertClientVerifyEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertClientVerifyEnabled"]));
    }
    if (m.find("XForwardedForClientCertFingerprintAlias") != m.end() && !m["XForwardedForClientCertFingerprintAlias"].empty()) {
      XForwardedForClientCertFingerprintAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertFingerprintAlias"]));
    }
    if (m.find("XForwardedForClientCertFingerprintEnabled") != m.end() && !m["XForwardedForClientCertFingerprintEnabled"].empty()) {
      XForwardedForClientCertFingerprintEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertFingerprintEnabled"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNAlias") != m.end() && !m["XForwardedForClientCertIssuerDNAlias"].empty()) {
      XForwardedForClientCertIssuerDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertIssuerDNAlias"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNEnabled") != m.end() && !m["XForwardedForClientCertIssuerDNEnabled"].empty()) {
      XForwardedForClientCertIssuerDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertIssuerDNEnabled"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNAlias") != m.end() && !m["XForwardedForClientCertSubjectDNAlias"].empty()) {
      XForwardedForClientCertSubjectDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertSubjectDNAlias"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNEnabled") != m.end() && !m["XForwardedForClientCertSubjectDNEnabled"].empty()) {
      XForwardedForClientCertSubjectDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertSubjectDNEnabled"]));
    }
    if (m.find("XForwardedForClientSrcPortEnabled") != m.end() && !m["XForwardedForClientSrcPortEnabled"].empty()) {
      XForwardedForClientSrcPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientSrcPortEnabled"]));
    }
    if (m.find("XForwardedForEnabled") != m.end() && !m["XForwardedForEnabled"].empty()) {
      XForwardedForEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForSLBIdEnabled") != m.end() && !m["XForwardedForSLBIdEnabled"].empty()) {
      XForwardedForSLBIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBIdEnabled"]));
    }
    if (m.find("XForwardedForSLBPortEnabled") != m.end() && !m["XForwardedForSLBPortEnabled"].empty()) {
      XForwardedForSLBPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBPortEnabled"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersXForwardedForConfig() = default;
};
class ListListenersResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<vector<ListListenersResponseBodyListenersDefaultActions>> defaultActions{};
  shared_ptr<bool> gzipEnabled{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> listenerStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<ListListenersResponseBodyListenersLogConfig> logConfig{};
  shared_ptr<ListListenersResponseBodyListenersQuicConfig> quicConfig{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<ListListenersResponseBodyListenersXForwardedForConfig> XForwardedForConfig{};

  ListListenersResponseBodyListeners() {}

  explicit ListListenersResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultActions) {
      vector<boost::any> temp1;
      for(auto item1:*defaultActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DefaultActions"] = boost::any(temp1);
    }
    if (gzipEnabled) {
      res["GzipEnabled"] = boost::any(*gzipEnabled);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (listenerStatus) {
      res["ListenerStatus"] = boost::any(*listenerStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (logConfig) {
      res["LogConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quicConfig) {
      res["QuicConfig"] = quicConfig ? boost::any(quicConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultActions") != m.end() && !m["DefaultActions"].empty()) {
      if (typeid(vector<boost::any>) == m["DefaultActions"].type()) {
        vector<ListListenersResponseBodyListenersDefaultActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DefaultActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListenersDefaultActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        defaultActions = make_shared<vector<ListListenersResponseBodyListenersDefaultActions>>(expect1);
      }
    }
    if (m.find("GzipEnabled") != m.end() && !m["GzipEnabled"].empty()) {
      gzipEnabled = make_shared<bool>(boost::any_cast<bool>(m["GzipEnabled"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ListenerStatus") != m.end() && !m["ListenerStatus"].empty()) {
      listenerStatus = make_shared<string>(boost::any_cast<string>(m["ListenerStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LogConfig") != m.end() && !m["LogConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogConfig"].type()) {
        ListListenersResponseBodyListenersLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogConfig"]));
        logConfig = make_shared<ListListenersResponseBodyListenersLogConfig>(model1);
      }
    }
    if (m.find("QuicConfig") != m.end() && !m["QuicConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuicConfig"].type()) {
        ListListenersResponseBodyListenersQuicConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuicConfig"]));
        quicConfig = make_shared<ListListenersResponseBodyListenersQuicConfig>(model1);
      }
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        ListListenersResponseBodyListenersXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<ListListenersResponseBodyListenersXForwardedForConfig>(model1);
      }
    }
  }


  virtual ~ListListenersResponseBodyListeners() = default;
};
class ListListenersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListListenersResponseBodyListeners>> listeners{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListListenersResponseBody() {}

  explicit ListListenersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<ListListenersResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<ListListenersResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListListenersResponseBody() = default;
};
class ListListenersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenersResponseBody> body{};

  ListListenersResponse() {}

  explicit ListListenersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenersResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenersResponse() = default;
};
class ListLoadBalancersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListLoadBalancersRequestTag() {}

  explicit ListLoadBalancersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListLoadBalancersRequestTag() = default;
};
class ListLoadBalancersRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> loadBalancerBussinessStatus{};
  shared_ptr<vector<string>> loadBalancerIds{};
  shared_ptr<vector<string>> loadBalancerNames{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> payType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListLoadBalancersRequestTag>> tag{};
  shared_ptr<vector<string>> vpcIds{};
  shared_ptr<string> zoneId{};

  ListLoadBalancersRequest() {}

  explicit ListLoadBalancersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (loadBalancerBussinessStatus) {
      res["LoadBalancerBussinessStatus"] = boost::any(*loadBalancerBussinessStatus);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (loadBalancerNames) {
      res["LoadBalancerNames"] = boost::any(*loadBalancerNames);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpcIds) {
      res["VpcIds"] = boost::any(*vpcIds);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("LoadBalancerBussinessStatus") != m.end() && !m["LoadBalancerBussinessStatus"].empty()) {
      loadBalancerBussinessStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerBussinessStatus"]));
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoadBalancerNames") != m.end() && !m["LoadBalancerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListLoadBalancersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListLoadBalancersRequestTag>>(expect1);
      }
    }
    if (m.find("VpcIds") != m.end() && !m["VpcIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListLoadBalancersRequest() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig : public Darabonba::Model {
public:
  shared_ptr<string> logProject{};
  shared_ptr<string> logStore{};

  ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> enabledTime{};

  ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (enabledTime) {
      res["EnabledTime"] = boost::any(*enabledTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EnabledTime") != m.end() && !m["EnabledTime"].empty()) {
      enabledTime = make_shared<string>(boost::any_cast<string>(m["EnabledTime"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig : public Darabonba::Model {
public:
  shared_ptr<string> payType{};

  ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks : public Darabonba::Model {
public:
  shared_ptr<string> lockReason{};
  shared_ptr<string> lockType{};

  ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (lockType) {
      res["LockType"] = boost::any(*lockType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("LockType") != m.end() && !m["LockType"].empty()) {
      lockType = make_shared<string>(boost::any_cast<string>(m["LockType"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListLoadBalancersResponseBodyLoadBalancersTags() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersTags() = default;
};
class ListLoadBalancersResponseBodyLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig> accessLogConfig{};
  shared_ptr<string> addressAllocatedMode{};
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DNSName{};
  shared_ptr<ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig> deletionProtectionConfig{};
  shared_ptr<string> ipv6AddressType{};
  shared_ptr<ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig> loadBalancerBillingConfig{};
  shared_ptr<string> loadBalancerBussinessStatus{};
  shared_ptr<string> loadBalancerEdition{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks>> loadBalancerOperationLocks{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig> modificationProtectionConfig{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancersTags>> tags{};
  shared_ptr<string> vpcId{};

  ListLoadBalancersResponseBodyLoadBalancers() {}

  explicit ListLoadBalancersResponseBodyLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogConfig) {
      res["AccessLogConfig"] = accessLogConfig ? boost::any(accessLogConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressAllocatedMode) {
      res["AddressAllocatedMode"] = boost::any(*addressAllocatedMode);
    }
    if (addressIpVersion) {
      res["AddressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DNSName) {
      res["DNSName"] = boost::any(*DNSName);
    }
    if (deletionProtectionConfig) {
      res["DeletionProtectionConfig"] = deletionProtectionConfig ? boost::any(deletionProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ipv6AddressType) {
      res["Ipv6AddressType"] = boost::any(*ipv6AddressType);
    }
    if (loadBalancerBillingConfig) {
      res["LoadBalancerBillingConfig"] = loadBalancerBillingConfig ? boost::any(loadBalancerBillingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancerBussinessStatus) {
      res["LoadBalancerBussinessStatus"] = boost::any(*loadBalancerBussinessStatus);
    }
    if (loadBalancerEdition) {
      res["LoadBalancerEdition"] = boost::any(*loadBalancerEdition);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (loadBalancerOperationLocks) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancerOperationLocks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancerOperationLocks"] = boost::any(temp1);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (modificationProtectionConfig) {
      res["ModificationProtectionConfig"] = modificationProtectionConfig ? boost::any(modificationProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogConfig") != m.end() && !m["AccessLogConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessLogConfig"].type()) {
        ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessLogConfig"]));
        accessLogConfig = make_shared<ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig>(model1);
      }
    }
    if (m.find("AddressAllocatedMode") != m.end() && !m["AddressAllocatedMode"].empty()) {
      addressAllocatedMode = make_shared<string>(boost::any_cast<string>(m["AddressAllocatedMode"]));
    }
    if (m.find("AddressIpVersion") != m.end() && !m["AddressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["AddressIpVersion"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DNSName") != m.end() && !m["DNSName"].empty()) {
      DNSName = make_shared<string>(boost::any_cast<string>(m["DNSName"]));
    }
    if (m.find("DeletionProtectionConfig") != m.end() && !m["DeletionProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeletionProtectionConfig"].type()) {
        ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeletionProtectionConfig"]));
        deletionProtectionConfig = make_shared<ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig>(model1);
      }
    }
    if (m.find("Ipv6AddressType") != m.end() && !m["Ipv6AddressType"].empty()) {
      ipv6AddressType = make_shared<string>(boost::any_cast<string>(m["Ipv6AddressType"]));
    }
    if (m.find("LoadBalancerBillingConfig") != m.end() && !m["LoadBalancerBillingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerBillingConfig"].type()) {
        ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerBillingConfig"]));
        loadBalancerBillingConfig = make_shared<ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig>(model1);
      }
    }
    if (m.find("LoadBalancerBussinessStatus") != m.end() && !m["LoadBalancerBussinessStatus"].empty()) {
      loadBalancerBussinessStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerBussinessStatus"]));
    }
    if (m.find("LoadBalancerEdition") != m.end() && !m["LoadBalancerEdition"].empty()) {
      loadBalancerEdition = make_shared<string>(boost::any_cast<string>(m["LoadBalancerEdition"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("LoadBalancerOperationLocks") != m.end() && !m["LoadBalancerOperationLocks"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancerOperationLocks"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancerOperationLocks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancerOperationLocks = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks>>(expect1);
      }
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("ModificationProtectionConfig") != m.end() && !m["ModificationProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModificationProtectionConfig"].type()) {
        ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModificationProtectionConfig"]));
        modificationProtectionConfig = make_shared<ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig>(model1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancersTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancersTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancersTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancers() = default;
};
class ListLoadBalancersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancers>> loadBalancers{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListLoadBalancersResponseBody() {}

  explicit ListLoadBalancersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancers) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancers"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancers") != m.end() && !m["LoadBalancers"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancers"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancers = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancers>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLoadBalancersResponseBody() = default;
};
class ListLoadBalancersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListLoadBalancersResponseBody> body{};

  ListLoadBalancersResponse() {}

  explicit ListLoadBalancersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListLoadBalancersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLoadBalancersResponseBody>(model1);
      }
    }
  }


  virtual ~ListLoadBalancersResponse() = default;
};
class ListRulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> listenerIds{};
  shared_ptr<vector<string>> loadBalancerIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> ruleIds{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerIds) {
      res["ListenerIds"] = boost::any(*listenerIds);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ruleIds) {
      res["RuleIds"] = boost::any(*ruleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerIds") != m.end() && !m["ListenerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ListenerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ListenerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listenerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRulesRequest() = default;
};
class ListRulesResponseBodyRulesRuleActionsFixedResponseConfig : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> httpCode{};

  ListRulesResponseBodyRulesRuleActionsFixedResponseConfig() {}

  explicit ListRulesResponseBodyRulesRuleActionsFixedResponseConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleActionsFixedResponseConfig() = default;
};
class ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class ListRulesResponseBodyRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  ListRulesResponseBodyRulesRuleActionsForwardGroupConfig() {}

  explicit ListRulesResponseBodyRulesRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleActionsForwardGroupConfig() = default;
};
class ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig() {}

  explicit ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig() = default;
};
class ListRulesResponseBodyRulesRuleActionsRedirectConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> path{};
  shared_ptr<string> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> query{};

  ListRulesResponseBodyRulesRuleActionsRedirectConfig() {}

  explicit ListRulesResponseBodyRulesRuleActionsRedirectConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleActionsRedirectConfig() = default;
};
class ListRulesResponseBodyRulesRuleActionsRewriteConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> path{};
  shared_ptr<string> query{};

  ListRulesResponseBodyRulesRuleActionsRewriteConfig() {}

  explicit ListRulesResponseBodyRulesRuleActionsRewriteConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleActionsRewriteConfig() = default;
};
class ListRulesResponseBodyRulesRuleActions : public Darabonba::Model {
public:
  shared_ptr<ListRulesResponseBodyRulesRuleActionsFixedResponseConfig> fixedResponseConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig> insertHeaderConfig{};
  shared_ptr<long> order{};
  shared_ptr<ListRulesResponseBodyRulesRuleActionsRedirectConfig> redirectConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleActionsRewriteConfig> rewriteConfig{};
  shared_ptr<string> type{};

  ListRulesResponseBodyRulesRuleActions() {}

  explicit ListRulesResponseBodyRulesRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fixedResponseConfig) {
      res["FixedResponseConfig"] = fixedResponseConfig ? boost::any(fixedResponseConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (insertHeaderConfig) {
      res["InsertHeaderConfig"] = insertHeaderConfig ? boost::any(insertHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (redirectConfig) {
      res["RedirectConfig"] = redirectConfig ? boost::any(redirectConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rewriteConfig) {
      res["RewriteConfig"] = rewriteConfig ? boost::any(rewriteConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FixedResponseConfig") != m.end() && !m["FixedResponseConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FixedResponseConfig"].type()) {
        ListRulesResponseBodyRulesRuleActionsFixedResponseConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FixedResponseConfig"]));
        fixedResponseConfig = make_shared<ListRulesResponseBodyRulesRuleActionsFixedResponseConfig>(model1);
      }
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        ListRulesResponseBodyRulesRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<ListRulesResponseBodyRulesRuleActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("InsertHeaderConfig") != m.end() && !m["InsertHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InsertHeaderConfig"].type()) {
        ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InsertHeaderConfig"]));
        insertHeaderConfig = make_shared<ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RedirectConfig") != m.end() && !m["RedirectConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectConfig"].type()) {
        ListRulesResponseBodyRulesRuleActionsRedirectConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectConfig"]));
        redirectConfig = make_shared<ListRulesResponseBodyRulesRuleActionsRedirectConfig>(model1);
      }
    }
    if (m.find("RewriteConfig") != m.end() && !m["RewriteConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RewriteConfig"].type()) {
        ListRulesResponseBodyRulesRuleActionsRewriteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RewriteConfig"]));
        rewriteConfig = make_shared<ListRulesResponseBodyRulesRuleActionsRewriteConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleActions() = default;
};
class ListRulesResponseBodyRulesRuleConditionsCookieConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListRulesResponseBodyRulesRuleConditionsCookieConfigValues() {}

  explicit ListRulesResponseBodyRulesRuleConditionsCookieConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsCookieConfigValues() = default;
};
class ListRulesResponseBodyRulesRuleConditionsCookieConfig : public Darabonba::Model {
public:
  shared_ptr<vector<ListRulesResponseBodyRulesRuleConditionsCookieConfigValues>> values{};

  ListRulesResponseBodyRulesRuleConditionsCookieConfig() {}

  explicit ListRulesResponseBodyRulesRuleConditionsCookieConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<ListRulesResponseBodyRulesRuleConditionsCookieConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyRulesRuleConditionsCookieConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<ListRulesResponseBodyRulesRuleConditionsCookieConfigValues>>(expect1);
      }
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsCookieConfig() = default;
};
class ListRulesResponseBodyRulesRuleConditionsHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  ListRulesResponseBodyRulesRuleConditionsHeaderConfig() {}

  explicit ListRulesResponseBodyRulesRuleConditionsHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsHeaderConfig() = default;
};
class ListRulesResponseBodyRulesRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  ListRulesResponseBodyRulesRuleConditionsHostConfig() {}

  explicit ListRulesResponseBodyRulesRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsHostConfig() = default;
};
class ListRulesResponseBodyRulesRuleConditionsMethodConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  ListRulesResponseBodyRulesRuleConditionsMethodConfig() {}

  explicit ListRulesResponseBodyRulesRuleConditionsMethodConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsMethodConfig() = default;
};
class ListRulesResponseBodyRulesRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  ListRulesResponseBodyRulesRuleConditionsPathConfig() {}

  explicit ListRulesResponseBodyRulesRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsPathConfig() = default;
};
class ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues() {}

  explicit ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues() = default;
};
class ListRulesResponseBodyRulesRuleConditionsQueryStringConfig : public Darabonba::Model {
public:
  shared_ptr<vector<ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues>> values{};

  ListRulesResponseBodyRulesRuleConditionsQueryStringConfig() {}

  explicit ListRulesResponseBodyRulesRuleConditionsQueryStringConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues>>(expect1);
      }
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditionsQueryStringConfig() = default;
};
class ListRulesResponseBodyRulesRuleConditions : public Darabonba::Model {
public:
  shared_ptr<ListRulesResponseBodyRulesRuleConditionsCookieConfig> cookieConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleConditionsHeaderConfig> headerConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleConditionsHostConfig> hostConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleConditionsMethodConfig> methodConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleConditionsPathConfig> pathConfig{};
  shared_ptr<ListRulesResponseBodyRulesRuleConditionsQueryStringConfig> queryStringConfig{};
  shared_ptr<string> type{};

  ListRulesResponseBodyRulesRuleConditions() {}

  explicit ListRulesResponseBodyRulesRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookieConfig) {
      res["CookieConfig"] = cookieConfig ? boost::any(cookieConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headerConfig) {
      res["HeaderConfig"] = headerConfig ? boost::any(headerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (methodConfig) {
      res["MethodConfig"] = methodConfig ? boost::any(methodConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryStringConfig) {
      res["QueryStringConfig"] = queryStringConfig ? boost::any(queryStringConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CookieConfig") != m.end() && !m["CookieConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CookieConfig"].type()) {
        ListRulesResponseBodyRulesRuleConditionsCookieConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CookieConfig"]));
        cookieConfig = make_shared<ListRulesResponseBodyRulesRuleConditionsCookieConfig>(model1);
      }
    }
    if (m.find("HeaderConfig") != m.end() && !m["HeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeaderConfig"].type()) {
        ListRulesResponseBodyRulesRuleConditionsHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeaderConfig"]));
        headerConfig = make_shared<ListRulesResponseBodyRulesRuleConditionsHeaderConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        ListRulesResponseBodyRulesRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<ListRulesResponseBodyRulesRuleConditionsHostConfig>(model1);
      }
    }
    if (m.find("MethodConfig") != m.end() && !m["MethodConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MethodConfig"].type()) {
        ListRulesResponseBodyRulesRuleConditionsMethodConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MethodConfig"]));
        methodConfig = make_shared<ListRulesResponseBodyRulesRuleConditionsMethodConfig>(model1);
      }
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        ListRulesResponseBodyRulesRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<ListRulesResponseBodyRulesRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("QueryStringConfig") != m.end() && !m["QueryStringConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueryStringConfig"].type()) {
        ListRulesResponseBodyRulesRuleConditionsQueryStringConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueryStringConfig"]));
        queryStringConfig = make_shared<ListRulesResponseBodyRulesRuleConditionsQueryStringConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListRulesResponseBodyRulesRuleConditions() = default;
};
class ListRulesResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> priority{};
  shared_ptr<vector<ListRulesResponseBodyRulesRuleActions>> ruleActions{};
  shared_ptr<vector<ListRulesResponseBodyRulesRuleConditions>> ruleConditions{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleStatus{};

  ListRulesResponseBodyRules() {}

  explicit ListRulesResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleStatus) {
      res["RuleStatus"] = boost::any(*ruleStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<ListRulesResponseBodyRulesRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyRulesRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<ListRulesResponseBodyRulesRuleActions>>(expect1);
      }
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<ListRulesResponseBodyRulesRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyRulesRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<ListRulesResponseBodyRulesRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleStatus") != m.end() && !m["RuleStatus"].empty()) {
      ruleStatus = make_shared<string>(boost::any_cast<string>(m["RuleStatus"]));
    }
  }


  virtual ~ListRulesResponseBodyRules() = default;
};
class ListRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRulesResponseBodyRules>> rules{};
  shared_ptr<long> totalCount{};

  ListRulesResponseBody() {}

  explicit ListRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListRulesResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListRulesResponseBodyRules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRulesResponseBody() = default;
};
class ListRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRulesResponseBody> body{};

  ListRulesResponse() {}

  explicit ListRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRulesResponse() = default;
};
class ListSecurityPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> securityPolicyIds{};
  shared_ptr<vector<string>> securityPolicyNames{};

  ListSecurityPoliciesRequest() {}

  explicit ListSecurityPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityPolicyIds) {
      res["SecurityPolicyIds"] = boost::any(*securityPolicyIds);
    }
    if (securityPolicyNames) {
      res["SecurityPolicyNames"] = boost::any(*securityPolicyNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityPolicyIds") != m.end() && !m["SecurityPolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityPolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityPolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityPolicyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityPolicyNames") != m.end() && !m["SecurityPolicyNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityPolicyNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityPolicyNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityPolicyNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSecurityPoliciesRequest() = default;
};
class ListSecurityPoliciesResponseBodySecurityPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ciphers{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> securityPolicyName{};
  shared_ptr<string> securityPolicyStatus{};
  shared_ptr<vector<string>> TLSVersions{};

  ListSecurityPoliciesResponseBodySecurityPolicies() {}

  explicit ListSecurityPoliciesResponseBodySecurityPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (securityPolicyName) {
      res["SecurityPolicyName"] = boost::any(*securityPolicyName);
    }
    if (securityPolicyStatus) {
      res["SecurityPolicyStatus"] = boost::any(*securityPolicyStatus);
    }
    if (TLSVersions) {
      res["TLSVersions"] = boost::any(*TLSVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("SecurityPolicyName") != m.end() && !m["SecurityPolicyName"].empty()) {
      securityPolicyName = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyName"]));
    }
    if (m.find("SecurityPolicyStatus") != m.end() && !m["SecurityPolicyStatus"].empty()) {
      securityPolicyStatus = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyStatus"]));
    }
    if (m.find("TLSVersions") != m.end() && !m["TLSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TLSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TLSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      TLSVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSecurityPoliciesResponseBodySecurityPolicies() = default;
};
class ListSecurityPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSecurityPoliciesResponseBodySecurityPolicies>> securityPolicies{};
  shared_ptr<long> totalCount{};

  ListSecurityPoliciesResponseBody() {}

  explicit ListSecurityPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*securityPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityPolicies"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPolicies") != m.end() && !m["SecurityPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityPolicies"].type()) {
        vector<ListSecurityPoliciesResponseBodySecurityPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityPoliciesResponseBodySecurityPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityPolicies = make_shared<vector<ListSecurityPoliciesResponseBodySecurityPolicies>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSecurityPoliciesResponseBody() = default;
};
class ListSecurityPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSecurityPoliciesResponseBody> body{};

  ListSecurityPoliciesResponse() {}

  explicit ListSecurityPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSecurityPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecurityPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecurityPoliciesResponse() = default;
};
class ListSecurityPolicyRelationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> securityPolicyIds{};

  ListSecurityPolicyRelationsRequest() {}

  explicit ListSecurityPolicyRelationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityPolicyIds) {
      res["SecurityPolicyIds"] = boost::any(*securityPolicyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityPolicyIds") != m.end() && !m["SecurityPolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityPolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityPolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityPolicyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSecurityPolicyRelationsRequest() = default;
};
class ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalancerId{};

  ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners() {}

  explicit ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners() = default;
};
class ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations : public Darabonba::Model {
public:
  shared_ptr<vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners>> relatedListeners{};
  shared_ptr<string> securityPolicyId{};

  ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations() {}

  explicit ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relatedListeners) {
      vector<boost::any> temp1;
      for(auto item1:*relatedListeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedListeners"] = boost::any(temp1);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelatedListeners") != m.end() && !m["RelatedListeners"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedListeners"].type()) {
        vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedListeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedListeners = make_shared<vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners>>(expect1);
      }
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations() = default;
};
class ListSecurityPolicyRelationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations>> secrityPolicyRelations{};

  ListSecurityPolicyRelationsResponseBody() {}

  explicit ListSecurityPolicyRelationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secrityPolicyRelations) {
      vector<boost::any> temp1;
      for(auto item1:*secrityPolicyRelations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecrityPolicyRelations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecrityPolicyRelations") != m.end() && !m["SecrityPolicyRelations"].empty()) {
      if (typeid(vector<boost::any>) == m["SecrityPolicyRelations"].type()) {
        vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecrityPolicyRelations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        secrityPolicyRelations = make_shared<vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations>>(expect1);
      }
    }
  }


  virtual ~ListSecurityPolicyRelationsResponseBody() = default;
};
class ListSecurityPolicyRelationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSecurityPolicyRelationsResponseBody> body{};

  ListSecurityPolicyRelationsResponse() {}

  explicit ListSecurityPolicyRelationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSecurityPolicyRelationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecurityPolicyRelationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecurityPolicyRelationsResponse() = default;
};
class ListServerGroupServersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServerGroupServersRequestTag() {}

  explicit ListServerGroupServersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListServerGroupServersRequestTag() = default;
};
class ListServerGroupServersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<string>> serverIds{};
  shared_ptr<vector<ListServerGroupServersRequestTag>> tag{};

  ListServerGroupServersRequest() {}

  explicit ListServerGroupServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverIds) {
      res["ServerIds"] = boost::any(*serverIds);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerIds") != m.end() && !m["ServerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serverIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServerGroupServersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupServersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServerGroupServersRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServerGroupServersRequest() = default;
};
class ListServerGroupServersResponseBodyServers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<string> status{};
  shared_ptr<long> weight{};

  ListServerGroupServersResponseBodyServers() {}

  explicit ListServerGroupServersResponseBodyServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~ListServerGroupServersResponseBodyServers() = default;
};
class ListServerGroupServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServerGroupServersResponseBodyServers>> servers{};
  shared_ptr<long> totalCount{};

  ListServerGroupServersResponseBody() {}

  explicit ListServerGroupServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<ListServerGroupServersResponseBodyServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupServersResponseBodyServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<ListServerGroupServersResponseBodyServers>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServerGroupServersResponseBody() = default;
};
class ListServerGroupServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServerGroupServersResponseBody> body{};

  ListServerGroupServersResponse() {}

  explicit ListServerGroupServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServerGroupServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServerGroupServersResponseBody>(model1);
      }
    }
  }


  virtual ~ListServerGroupServersResponse() = default;
};
class ListServerGroupsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServerGroupsRequestTag() {}

  explicit ListServerGroupsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListServerGroupsRequestTag() = default;
};
class ListServerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> serverGroupIds{};
  shared_ptr<vector<string>> serverGroupNames{};
  shared_ptr<vector<ListServerGroupsRequestTag>> tag{};
  shared_ptr<string> vpcId{};

  ListServerGroupsRequest() {}

  explicit ListServerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverGroupIds) {
      res["ServerGroupIds"] = boost::any(*serverGroupIds);
    }
    if (serverGroupNames) {
      res["ServerGroupNames"] = boost::any(*serverGroupNames);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerGroupIds") != m.end() && !m["ServerGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServerGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServerGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serverGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServerGroupNames") != m.end() && !m["ServerGroupNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServerGroupNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServerGroupNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serverGroupNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServerGroupsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServerGroupsRequestTag>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListServerGroupsRequest() = default;
};
class ListServerGroupsResponseBodyServerGroupsHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> healthCheckCodes{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<string> healthCheckHost{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};

  ListServerGroupsResponseBodyServerGroupsHealthCheckConfig() {}

  explicit ListServerGroupsResponseBodyServerGroupsHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckCodes) {
      res["HealthCheckCodes"] = boost::any(*healthCheckCodes);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckHost) {
      res["HealthCheckHost"] = boost::any(*healthCheckHost);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckCodes") != m.end() && !m["HealthCheckCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckHost") != m.end() && !m["HealthCheckHost"].empty()) {
      healthCheckHost = make_shared<string>(boost::any_cast<string>(m["HealthCheckHost"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroupsHealthCheckConfig() = default;
};
class ListServerGroupsResponseBodyServerGroupsStickySessionConfig : public Darabonba::Model {
public:
  shared_ptr<string> cookie{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<bool> stickySessionEnabled{};
  shared_ptr<string> stickySessionType{};

  ListServerGroupsResponseBodyServerGroupsStickySessionConfig() {}

  explicit ListServerGroupsResponseBodyServerGroupsStickySessionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (stickySessionEnabled) {
      res["StickySessionEnabled"] = boost::any(*stickySessionEnabled);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("StickySessionEnabled") != m.end() && !m["StickySessionEnabled"].empty()) {
      stickySessionEnabled = make_shared<bool>(boost::any_cast<bool>(m["StickySessionEnabled"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroupsStickySessionConfig() = default;
};
class ListServerGroupsResponseBodyServerGroupsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServerGroupsResponseBodyServerGroupsTags() {}

  explicit ListServerGroupsResponseBodyServerGroupsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroupsTags() = default;
};
class ListServerGroupsResponseBodyServerGroups : public Darabonba::Model {
public:
  shared_ptr<bool> configManagedEnabled{};
  shared_ptr<ListServerGroupsResponseBodyServerGroupsHealthCheckConfig> healthCheckConfig{};
  shared_ptr<bool> ipv6Enabled{};
  shared_ptr<string> protocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> serverCount{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> serverGroupName{};
  shared_ptr<string> serverGroupStatus{};
  shared_ptr<string> serverGroupType{};
  shared_ptr<string> serviceName{};
  shared_ptr<ListServerGroupsResponseBodyServerGroupsStickySessionConfig> stickySessionConfig{};
  shared_ptr<vector<ListServerGroupsResponseBodyServerGroupsTags>> tags{};
  shared_ptr<bool> upstreamKeepaliveEnabled{};
  shared_ptr<string> vpcId{};

  ListServerGroupsResponseBodyServerGroups() {}

  explicit ListServerGroupsResponseBodyServerGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configManagedEnabled) {
      res["ConfigManagedEnabled"] = boost::any(*configManagedEnabled);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ipv6Enabled) {
      res["Ipv6Enabled"] = boost::any(*ipv6Enabled);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (serverCount) {
      res["ServerCount"] = boost::any(*serverCount);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverGroupName) {
      res["ServerGroupName"] = boost::any(*serverGroupName);
    }
    if (serverGroupStatus) {
      res["ServerGroupStatus"] = boost::any(*serverGroupStatus);
    }
    if (serverGroupType) {
      res["ServerGroupType"] = boost::any(*serverGroupType);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (stickySessionConfig) {
      res["StickySessionConfig"] = stickySessionConfig ? boost::any(stickySessionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (upstreamKeepaliveEnabled) {
      res["UpstreamKeepaliveEnabled"] = boost::any(*upstreamKeepaliveEnabled);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigManagedEnabled") != m.end() && !m["ConfigManagedEnabled"].empty()) {
      configManagedEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigManagedEnabled"]));
    }
    if (m.find("HealthCheckConfig") != m.end() && !m["HealthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheckConfig"].type()) {
        ListServerGroupsResponseBodyServerGroupsHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheckConfig"]));
        healthCheckConfig = make_shared<ListServerGroupsResponseBodyServerGroupsHealthCheckConfig>(model1);
      }
    }
    if (m.find("Ipv6Enabled") != m.end() && !m["Ipv6Enabled"].empty()) {
      ipv6Enabled = make_shared<bool>(boost::any_cast<bool>(m["Ipv6Enabled"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("ServerCount") != m.end() && !m["ServerCount"].empty()) {
      serverCount = make_shared<long>(boost::any_cast<long>(m["ServerCount"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerGroupName") != m.end() && !m["ServerGroupName"].empty()) {
      serverGroupName = make_shared<string>(boost::any_cast<string>(m["ServerGroupName"]));
    }
    if (m.find("ServerGroupStatus") != m.end() && !m["ServerGroupStatus"].empty()) {
      serverGroupStatus = make_shared<string>(boost::any_cast<string>(m["ServerGroupStatus"]));
    }
    if (m.find("ServerGroupType") != m.end() && !m["ServerGroupType"].empty()) {
      serverGroupType = make_shared<string>(boost::any_cast<string>(m["ServerGroupType"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StickySessionConfig") != m.end() && !m["StickySessionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["StickySessionConfig"].type()) {
        ListServerGroupsResponseBodyServerGroupsStickySessionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StickySessionConfig"]));
        stickySessionConfig = make_shared<ListServerGroupsResponseBodyServerGroupsStickySessionConfig>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServerGroupsResponseBodyServerGroupsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupsResponseBodyServerGroupsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServerGroupsResponseBodyServerGroupsTags>>(expect1);
      }
    }
    if (m.find("UpstreamKeepaliveEnabled") != m.end() && !m["UpstreamKeepaliveEnabled"].empty()) {
      upstreamKeepaliveEnabled = make_shared<bool>(boost::any_cast<bool>(m["UpstreamKeepaliveEnabled"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroups() = default;
};
class ListServerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServerGroupsResponseBodyServerGroups>> serverGroups{};
  shared_ptr<long> totalCount{};

  ListServerGroupsResponseBody() {}

  explicit ListServerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverGroups) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroups"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerGroups") != m.end() && !m["ServerGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroups"].type()) {
        vector<ListServerGroupsResponseBodyServerGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupsResponseBodyServerGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroups = make_shared<vector<ListServerGroupsResponseBodyServerGroups>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServerGroupsResponseBody() = default;
};
class ListServerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServerGroupsResponseBody> body{};

  ListServerGroupsResponse() {}

  explicit ListServerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServerGroupsResponse() = default;
};
class ListSystemSecurityPoliciesResponseBodySecurityPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ciphers{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<vector<string>> TLSVersions{};

  ListSystemSecurityPoliciesResponseBodySecurityPolicies() {}

  explicit ListSystemSecurityPoliciesResponseBodySecurityPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (TLSVersions) {
      res["TLSVersions"] = boost::any(*TLSVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("TLSVersions") != m.end() && !m["TLSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TLSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TLSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      TLSVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSystemSecurityPoliciesResponseBodySecurityPolicies() = default;
};
class ListSystemSecurityPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies>> securityPolicies{};

  ListSystemSecurityPoliciesResponseBody() {}

  explicit ListSystemSecurityPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*securityPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPolicies") != m.end() && !m["SecurityPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityPolicies"].type()) {
        vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSystemSecurityPoliciesResponseBodySecurityPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityPolicies = make_shared<vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies>>(expect1);
      }
    }
  }


  virtual ~ListSystemSecurityPoliciesResponseBody() = default;
};
class ListSystemSecurityPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSystemSecurityPoliciesResponseBody> body{};

  ListSystemSecurityPoliciesResponse() {}

  explicit ListSystemSecurityPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSystemSecurityPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSystemSecurityPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSystemSecurityPoliciesResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> keyword{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceType{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyTagKeys : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> tagKey{};

  ListTagKeysResponseBodyTagKeys() {}

  explicit ListTagKeysResponseBodyTagKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagKeysResponseBodyTagKeys() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagKeysResponseBodyTagKeys>> tagKeys{};
  shared_ptr<long> totalCount{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagKeys) {
      vector<boost::any> temp1;
      for(auto item1:*tagKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagKeys"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<ListTagKeysResponseBodyTagKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagKeysResponseBodyTagKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagKeys = make_shared<vector<ListTagKeysResponseBodyTagKeys>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};
  shared_ptr<long> totalCount{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tagValues{};
  shared_ptr<long> totalCount{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagValuesResponseBody() = default;
};
class ListTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class RemoveEntriesFromAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> entries{};

  RemoveEntriesFromAclRequest() {}

  explicit RemoveEntriesFromAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (entries) {
      res["Entries"] = boost::any(*entries);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Entries") != m.end() && !m["Entries"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Entries"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Entries"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entries = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveEntriesFromAclRequest() = default;
};
class RemoveEntriesFromAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  RemoveEntriesFromAclResponseBody() {}

  explicit RemoveEntriesFromAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveEntriesFromAclResponseBody() = default;
};
class RemoveEntriesFromAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveEntriesFromAclResponseBody> body{};

  RemoveEntriesFromAclResponse() {}

  explicit RemoveEntriesFromAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveEntriesFromAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveEntriesFromAclResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveEntriesFromAclResponse() = default;
};
class RemoveServersFromServerGroupRequestServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};

  RemoveServersFromServerGroupRequestServers() {}

  explicit RemoveServersFromServerGroupRequestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
  }


  virtual ~RemoveServersFromServerGroupRequestServers() = default;
};
class RemoveServersFromServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<RemoveServersFromServerGroupRequestServers>> servers{};

  RemoveServersFromServerGroupRequest() {}

  explicit RemoveServersFromServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<RemoveServersFromServerGroupRequestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveServersFromServerGroupRequestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<RemoveServersFromServerGroupRequestServers>>(expect1);
      }
    }
  }


  virtual ~RemoveServersFromServerGroupRequest() = default;
};
class RemoveServersFromServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  RemoveServersFromServerGroupResponseBody() {}

  explicit RemoveServersFromServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveServersFromServerGroupResponseBody() = default;
};
class RemoveServersFromServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveServersFromServerGroupResponseBody> body{};

  RemoveServersFromServerGroupResponse() {}

  explicit RemoveServersFromServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveServersFromServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveServersFromServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveServersFromServerGroupResponse() = default;
};
class ReplaceServersInServerGroupRequestAddedServers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<long> weight{};

  ReplaceServersInServerGroupRequestAddedServers() {}

  explicit ReplaceServersInServerGroupRequestAddedServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~ReplaceServersInServerGroupRequestAddedServers() = default;
};
class ReplaceServersInServerGroupRequestRemovedServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};

  ReplaceServersInServerGroupRequestRemovedServers() {}

  explicit ReplaceServersInServerGroupRequestRemovedServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
  }


  virtual ~ReplaceServersInServerGroupRequestRemovedServers() = default;
};
class ReplaceServersInServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ReplaceServersInServerGroupRequestAddedServers>> addedServers{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<ReplaceServersInServerGroupRequestRemovedServers>> removedServers{};
  shared_ptr<string> serverGroupId{};

  ReplaceServersInServerGroupRequest() {}

  explicit ReplaceServersInServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addedServers) {
      vector<boost::any> temp1;
      for(auto item1:*addedServers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AddedServers"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (removedServers) {
      vector<boost::any> temp1;
      for(auto item1:*removedServers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RemovedServers"] = boost::any(temp1);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddedServers") != m.end() && !m["AddedServers"].empty()) {
      if (typeid(vector<boost::any>) == m["AddedServers"].type()) {
        vector<ReplaceServersInServerGroupRequestAddedServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AddedServers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReplaceServersInServerGroupRequestAddedServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addedServers = make_shared<vector<ReplaceServersInServerGroupRequestAddedServers>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RemovedServers") != m.end() && !m["RemovedServers"].empty()) {
      if (typeid(vector<boost::any>) == m["RemovedServers"].type()) {
        vector<ReplaceServersInServerGroupRequestRemovedServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RemovedServers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReplaceServersInServerGroupRequestRemovedServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        removedServers = make_shared<vector<ReplaceServersInServerGroupRequestRemovedServers>>(expect1);
      }
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~ReplaceServersInServerGroupRequest() = default;
};
class ReplaceServersInServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  ReplaceServersInServerGroupResponseBody() {}

  explicit ReplaceServersInServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReplaceServersInServerGroupResponseBody() = default;
};
class ReplaceServersInServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReplaceServersInServerGroupResponseBody> body{};

  ReplaceServersInServerGroupResponse() {}

  explicit ReplaceServersInServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReplaceServersInServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplaceServersInServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ReplaceServersInServerGroupResponse() = default;
};
class StartListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  StartListenerRequest() {}

  explicit StartListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~StartListenerRequest() = default;
};
class StartListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  StartListenerResponseBody() {}

  explicit StartListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartListenerResponseBody() = default;
};
class StartListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartListenerResponseBody> body{};

  StartListenerResponse() {}

  explicit StartListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartListenerResponseBody>(model1);
      }
    }
  }


  virtual ~StartListenerResponse() = default;
};
class StopListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  StopListenerRequest() {}

  explicit StopListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~StopListenerRequest() = default;
};
class StopListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  StopListenerResponseBody() {}

  explicit StopListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopListenerResponseBody() = default;
};
class StopListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopListenerResponseBody> body{};

  StopListenerResponse() {}

  explicit StopListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopListenerResponseBody>(model1);
      }
    }
  }


  virtual ~StopListenerResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UnTagResourcesRequestTag() {}

  explicit UnTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UnTagResourcesRequestTag() = default;
};
class UnTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<UnTagResourcesRequestTag>> tag{};
  shared_ptr<vector<string>> tagKey{};

  UnTagResourcesRequest() {}

  explicit UnTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<UnTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UnTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<UnTagResourcesRequestTag>>(expect1);
      }
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UnTagResourcesRequest() = default;
};
class UnTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnTagResourcesResponseBody() {}

  explicit UnTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnTagResourcesResponseBody() = default;
};
class UnTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnTagResourcesResponseBody> body{};

  UnTagResourcesResponse() {}

  explicit UnTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UnTagResourcesResponse() = default;
};
class UpdateAclAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> aclName{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  UpdateAclAttributeRequest() {}

  explicit UpdateAclAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~UpdateAclAttributeRequest() = default;
};
class UpdateAclAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAclAttributeResponseBody() {}

  explicit UpdateAclAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAclAttributeResponseBody() = default;
};
class UpdateAclAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAclAttributeResponseBody> body{};

  UpdateAclAttributeResponse() {}

  explicit UpdateAclAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAclAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAclAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAclAttributeResponse() = default;
};
class UpdateHealthCheckTemplateAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> healthCheckCodes{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<string> healthCheckHost{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<string> healthCheckTemplateId{};
  shared_ptr<string> healthCheckTemplateName{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};

  UpdateHealthCheckTemplateAttributeRequest() {}

  explicit UpdateHealthCheckTemplateAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckCodes) {
      res["HealthCheckCodes"] = boost::any(*healthCheckCodes);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckHost) {
      res["HealthCheckHost"] = boost::any(*healthCheckHost);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckTemplateId) {
      res["HealthCheckTemplateId"] = boost::any(*healthCheckTemplateId);
    }
    if (healthCheckTemplateName) {
      res["HealthCheckTemplateName"] = boost::any(*healthCheckTemplateName);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckCodes") != m.end() && !m["HealthCheckCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckHost") != m.end() && !m["HealthCheckHost"].empty()) {
      healthCheckHost = make_shared<string>(boost::any_cast<string>(m["HealthCheckHost"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckTemplateId") != m.end() && !m["HealthCheckTemplateId"].empty()) {
      healthCheckTemplateId = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateId"]));
    }
    if (m.find("HealthCheckTemplateName") != m.end() && !m["HealthCheckTemplateName"].empty()) {
      healthCheckTemplateName = make_shared<string>(boost::any_cast<string>(m["HealthCheckTemplateName"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~UpdateHealthCheckTemplateAttributeRequest() = default;
};
class UpdateHealthCheckTemplateAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateHealthCheckTemplateAttributeResponseBody() {}

  explicit UpdateHealthCheckTemplateAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateHealthCheckTemplateAttributeResponseBody() = default;
};
class UpdateHealthCheckTemplateAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateHealthCheckTemplateAttributeResponseBody> body{};

  UpdateHealthCheckTemplateAttributeResponse() {}

  explicit UpdateHealthCheckTemplateAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateHealthCheckTemplateAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHealthCheckTemplateAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHealthCheckTemplateAttributeResponse() = default;
};
class UpdateListenerAttributeRequestCaCertificates : public Darabonba::Model {
public:

  UpdateListenerAttributeRequestCaCertificates() {}

  explicit UpdateListenerAttributeRequestCaCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~UpdateListenerAttributeRequestCaCertificates() = default;
};
class UpdateListenerAttributeRequestCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};

  UpdateListenerAttributeRequestCertificates() {}

  explicit UpdateListenerAttributeRequestCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
  }


  virtual ~UpdateListenerAttributeRequestCertificates() = default;
};
class UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples() {}

  explicit UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples() = default;
};
class UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig() {}

  explicit UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<UpdateListenerAttributeRequestDefaultActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig() = default;
};
class UpdateListenerAttributeRequestDefaultActions : public Darabonba::Model {
public:
  shared_ptr<UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<string> type{};

  UpdateListenerAttributeRequestDefaultActions() {}

  explicit UpdateListenerAttributeRequestDefaultActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateListenerAttributeRequestDefaultActions() = default;
};
class UpdateListenerAttributeRequestQuicConfig : public Darabonba::Model {
public:
  shared_ptr<string> quicListenerId{};
  shared_ptr<bool> quicUpgradeEnabled{};

  UpdateListenerAttributeRequestQuicConfig() {}

  explicit UpdateListenerAttributeRequestQuicConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quicListenerId) {
      res["QuicListenerId"] = boost::any(*quicListenerId);
    }
    if (quicUpgradeEnabled) {
      res["QuicUpgradeEnabled"] = boost::any(*quicUpgradeEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuicListenerId") != m.end() && !m["QuicListenerId"].empty()) {
      quicListenerId = make_shared<string>(boost::any_cast<string>(m["QuicListenerId"]));
    }
    if (m.find("QuicUpgradeEnabled") != m.end() && !m["QuicUpgradeEnabled"].empty()) {
      quicUpgradeEnabled = make_shared<bool>(boost::any_cast<bool>(m["QuicUpgradeEnabled"]));
    }
  }


  virtual ~UpdateListenerAttributeRequestQuicConfig() = default;
};
class UpdateListenerAttributeRequestXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<string> XForwardedForClientCertClientVerifyAlias{};
  shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled{};
  shared_ptr<string> XForwardedForClientCertFingerprintAlias{};
  shared_ptr<bool> XForwardedForClientCertFingerprintEnabled{};
  shared_ptr<string> XForwardedForClientCertIssuerDNAlias{};
  shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled{};
  shared_ptr<string> XForwardedForClientCertSubjectDNAlias{};
  shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled{};
  shared_ptr<bool> XForwardedForClientSrcPortEnabled{};
  shared_ptr<bool> XForwardedForEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForSLBIdEnabled{};
  shared_ptr<bool> XForwardedForSLBPortEnabled{};

  UpdateListenerAttributeRequestXForwardedForConfig() {}

  explicit UpdateListenerAttributeRequestXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForClientCertClientVerifyAlias) {
      res["XForwardedForClientCertClientVerifyAlias"] = boost::any(*XForwardedForClientCertClientVerifyAlias);
    }
    if (XForwardedForClientCertClientVerifyEnabled) {
      res["XForwardedForClientCertClientVerifyEnabled"] = boost::any(*XForwardedForClientCertClientVerifyEnabled);
    }
    if (XForwardedForClientCertFingerprintAlias) {
      res["XForwardedForClientCertFingerprintAlias"] = boost::any(*XForwardedForClientCertFingerprintAlias);
    }
    if (XForwardedForClientCertFingerprintEnabled) {
      res["XForwardedForClientCertFingerprintEnabled"] = boost::any(*XForwardedForClientCertFingerprintEnabled);
    }
    if (XForwardedForClientCertIssuerDNAlias) {
      res["XForwardedForClientCertIssuerDNAlias"] = boost::any(*XForwardedForClientCertIssuerDNAlias);
    }
    if (XForwardedForClientCertIssuerDNEnabled) {
      res["XForwardedForClientCertIssuerDNEnabled"] = boost::any(*XForwardedForClientCertIssuerDNEnabled);
    }
    if (XForwardedForClientCertSubjectDNAlias) {
      res["XForwardedForClientCertSubjectDNAlias"] = boost::any(*XForwardedForClientCertSubjectDNAlias);
    }
    if (XForwardedForClientCertSubjectDNEnabled) {
      res["XForwardedForClientCertSubjectDNEnabled"] = boost::any(*XForwardedForClientCertSubjectDNEnabled);
    }
    if (XForwardedForClientSrcPortEnabled) {
      res["XForwardedForClientSrcPortEnabled"] = boost::any(*XForwardedForClientSrcPortEnabled);
    }
    if (XForwardedForEnabled) {
      res["XForwardedForEnabled"] = boost::any(*XForwardedForEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForSLBIdEnabled) {
      res["XForwardedForSLBIdEnabled"] = boost::any(*XForwardedForSLBIdEnabled);
    }
    if (XForwardedForSLBPortEnabled) {
      res["XForwardedForSLBPortEnabled"] = boost::any(*XForwardedForSLBPortEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForClientCertClientVerifyAlias") != m.end() && !m["XForwardedForClientCertClientVerifyAlias"].empty()) {
      XForwardedForClientCertClientVerifyAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertClientVerifyAlias"]));
    }
    if (m.find("XForwardedForClientCertClientVerifyEnabled") != m.end() && !m["XForwardedForClientCertClientVerifyEnabled"].empty()) {
      XForwardedForClientCertClientVerifyEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertClientVerifyEnabled"]));
    }
    if (m.find("XForwardedForClientCertFingerprintAlias") != m.end() && !m["XForwardedForClientCertFingerprintAlias"].empty()) {
      XForwardedForClientCertFingerprintAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertFingerprintAlias"]));
    }
    if (m.find("XForwardedForClientCertFingerprintEnabled") != m.end() && !m["XForwardedForClientCertFingerprintEnabled"].empty()) {
      XForwardedForClientCertFingerprintEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertFingerprintEnabled"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNAlias") != m.end() && !m["XForwardedForClientCertIssuerDNAlias"].empty()) {
      XForwardedForClientCertIssuerDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertIssuerDNAlias"]));
    }
    if (m.find("XForwardedForClientCertIssuerDNEnabled") != m.end() && !m["XForwardedForClientCertIssuerDNEnabled"].empty()) {
      XForwardedForClientCertIssuerDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertIssuerDNEnabled"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNAlias") != m.end() && !m["XForwardedForClientCertSubjectDNAlias"].empty()) {
      XForwardedForClientCertSubjectDNAlias = make_shared<string>(boost::any_cast<string>(m["XForwardedForClientCertSubjectDNAlias"]));
    }
    if (m.find("XForwardedForClientCertSubjectDNEnabled") != m.end() && !m["XForwardedForClientCertSubjectDNEnabled"].empty()) {
      XForwardedForClientCertSubjectDNEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientCertSubjectDNEnabled"]));
    }
    if (m.find("XForwardedForClientSrcPortEnabled") != m.end() && !m["XForwardedForClientSrcPortEnabled"].empty()) {
      XForwardedForClientSrcPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForClientSrcPortEnabled"]));
    }
    if (m.find("XForwardedForEnabled") != m.end() && !m["XForwardedForEnabled"].empty()) {
      XForwardedForEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForSLBIdEnabled") != m.end() && !m["XForwardedForSLBIdEnabled"].empty()) {
      XForwardedForSLBIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBIdEnabled"]));
    }
    if (m.find("XForwardedForSLBPortEnabled") != m.end() && !m["XForwardedForSLBPortEnabled"].empty()) {
      XForwardedForSLBPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForSLBPortEnabled"]));
    }
  }


  virtual ~UpdateListenerAttributeRequestXForwardedForConfig() = default;
};
class UpdateListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateListenerAttributeRequestCaCertificates>> caCertificates{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<UpdateListenerAttributeRequestCertificates>> certificates{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<UpdateListenerAttributeRequestDefaultActions>> defaultActions{};
  shared_ptr<bool> dryRun{};
  shared_ptr<bool> gzipEnabled{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<UpdateListenerAttributeRequestQuicConfig> quicConfig{};
  shared_ptr<long> requestTimeout{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<UpdateListenerAttributeRequestXForwardedForConfig> XForwardedForConfig{};

  UpdateListenerAttributeRequest() {}

  explicit UpdateListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertificates) {
      vector<boost::any> temp1;
      for(auto item1:*caCertificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CaCertificates"] = boost::any(temp1);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (defaultActions) {
      vector<boost::any> temp1;
      for(auto item1:*defaultActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DefaultActions"] = boost::any(temp1);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (gzipEnabled) {
      res["GzipEnabled"] = boost::any(*gzipEnabled);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (quicConfig) {
      res["QuicConfig"] = quicConfig ? boost::any(quicConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestTimeout) {
      res["RequestTimeout"] = boost::any(*requestTimeout);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaCertificates") != m.end() && !m["CaCertificates"].empty()) {
      if (typeid(vector<boost::any>) == m["CaCertificates"].type()) {
        vector<UpdateListenerAttributeRequestCaCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CaCertificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateListenerAttributeRequestCaCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        caCertificates = make_shared<vector<UpdateListenerAttributeRequestCaCertificates>>(expect1);
      }
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<UpdateListenerAttributeRequestCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateListenerAttributeRequestCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<UpdateListenerAttributeRequestCertificates>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DefaultActions") != m.end() && !m["DefaultActions"].empty()) {
      if (typeid(vector<boost::any>) == m["DefaultActions"].type()) {
        vector<UpdateListenerAttributeRequestDefaultActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DefaultActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateListenerAttributeRequestDefaultActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        defaultActions = make_shared<vector<UpdateListenerAttributeRequestDefaultActions>>(expect1);
      }
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("GzipEnabled") != m.end() && !m["GzipEnabled"].empty()) {
      gzipEnabled = make_shared<bool>(boost::any_cast<bool>(m["GzipEnabled"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("QuicConfig") != m.end() && !m["QuicConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuicConfig"].type()) {
        UpdateListenerAttributeRequestQuicConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuicConfig"]));
        quicConfig = make_shared<UpdateListenerAttributeRequestQuicConfig>(model1);
      }
    }
    if (m.find("RequestTimeout") != m.end() && !m["RequestTimeout"].empty()) {
      requestTimeout = make_shared<long>(boost::any_cast<long>(m["RequestTimeout"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        UpdateListenerAttributeRequestXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<UpdateListenerAttributeRequestXForwardedForConfig>(model1);
      }
    }
  }


  virtual ~UpdateListenerAttributeRequest() = default;
};
class UpdateListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateListenerAttributeResponseBody() {}

  explicit UpdateListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateListenerAttributeResponseBody() = default;
};
class UpdateListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateListenerAttributeResponseBody> body{};

  UpdateListenerAttributeResponse() {}

  explicit UpdateListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateListenerAttributeResponse() = default;
};
class UpdateListenerLogConfigRequestAccessLogTracingConfig : public Darabonba::Model {
public:
  shared_ptr<bool> tracingEnabled{};
  shared_ptr<long> tracingSample{};
  shared_ptr<string> tracingType{};

  UpdateListenerLogConfigRequestAccessLogTracingConfig() {}

  explicit UpdateListenerLogConfigRequestAccessLogTracingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tracingEnabled) {
      res["TracingEnabled"] = boost::any(*tracingEnabled);
    }
    if (tracingSample) {
      res["TracingSample"] = boost::any(*tracingSample);
    }
    if (tracingType) {
      res["TracingType"] = boost::any(*tracingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TracingEnabled") != m.end() && !m["TracingEnabled"].empty()) {
      tracingEnabled = make_shared<bool>(boost::any_cast<bool>(m["TracingEnabled"]));
    }
    if (m.find("TracingSample") != m.end() && !m["TracingSample"].empty()) {
      tracingSample = make_shared<long>(boost::any_cast<long>(m["TracingSample"]));
    }
    if (m.find("TracingType") != m.end() && !m["TracingType"].empty()) {
      tracingType = make_shared<string>(boost::any_cast<string>(m["TracingType"]));
    }
  }


  virtual ~UpdateListenerLogConfigRequestAccessLogTracingConfig() = default;
};
class UpdateListenerLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled{};
  shared_ptr<UpdateListenerLogConfigRequestAccessLogTracingConfig> accessLogTracingConfig{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};

  UpdateListenerLogConfigRequest() {}

  explicit UpdateListenerLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogRecordCustomizedHeadersEnabled) {
      res["AccessLogRecordCustomizedHeadersEnabled"] = boost::any(*accessLogRecordCustomizedHeadersEnabled);
    }
    if (accessLogTracingConfig) {
      res["AccessLogTracingConfig"] = accessLogTracingConfig ? boost::any(accessLogTracingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogRecordCustomizedHeadersEnabled") != m.end() && !m["AccessLogRecordCustomizedHeadersEnabled"].empty()) {
      accessLogRecordCustomizedHeadersEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogRecordCustomizedHeadersEnabled"]));
    }
    if (m.find("AccessLogTracingConfig") != m.end() && !m["AccessLogTracingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessLogTracingConfig"].type()) {
        UpdateListenerLogConfigRequestAccessLogTracingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessLogTracingConfig"]));
        accessLogTracingConfig = make_shared<UpdateListenerLogConfigRequestAccessLogTracingConfig>(model1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~UpdateListenerLogConfigRequest() = default;
};
class UpdateListenerLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateListenerLogConfigResponseBody() {}

  explicit UpdateListenerLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateListenerLogConfigResponseBody() = default;
};
class UpdateListenerLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateListenerLogConfigResponseBody> body{};

  UpdateListenerLogConfigResponse() {}

  explicit UpdateListenerLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateListenerLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateListenerLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateListenerLogConfigResponse() = default;
};
class UpdateLoadBalancerAddressTypeConfigRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> allocationId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  UpdateLoadBalancerAddressTypeConfigRequestZoneMappings() {}

  explicit UpdateLoadBalancerAddressTypeConfigRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationId) {
      res["AllocationId"] = boost::any(*allocationId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationId") != m.end() && !m["AllocationId"].empty()) {
      allocationId = make_shared<string>(boost::any_cast<string>(m["AllocationId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateLoadBalancerAddressTypeConfigRequestZoneMappings() = default;
};
class UpdateLoadBalancerAddressTypeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings>> zoneMappings{};

  UpdateLoadBalancerAddressTypeConfigRequest() {}

  explicit UpdateLoadBalancerAddressTypeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateLoadBalancerAddressTypeConfigRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~UpdateLoadBalancerAddressTypeConfigRequest() = default;
};
class UpdateLoadBalancerAddressTypeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateLoadBalancerAddressTypeConfigResponseBody() {}

  explicit UpdateLoadBalancerAddressTypeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLoadBalancerAddressTypeConfigResponseBody() = default;
};
class UpdateLoadBalancerAddressTypeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLoadBalancerAddressTypeConfigResponseBody> body{};

  UpdateLoadBalancerAddressTypeConfigResponse() {}

  explicit UpdateLoadBalancerAddressTypeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateLoadBalancerAddressTypeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerAddressTypeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerAddressTypeConfigResponse() = default;
};
class UpdateLoadBalancerAttributeRequestModificationProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  UpdateLoadBalancerAttributeRequestModificationProtectionConfig() {}

  explicit UpdateLoadBalancerAttributeRequestModificationProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateLoadBalancerAttributeRequestModificationProtectionConfig() = default;
};
class UpdateLoadBalancerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<UpdateLoadBalancerAttributeRequestModificationProtectionConfig> modificationProtectionConfig{};

  UpdateLoadBalancerAttributeRequest() {}

  explicit UpdateLoadBalancerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (modificationProtectionConfig) {
      res["ModificationProtectionConfig"] = modificationProtectionConfig ? boost::any(modificationProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("ModificationProtectionConfig") != m.end() && !m["ModificationProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModificationProtectionConfig"].type()) {
        UpdateLoadBalancerAttributeRequestModificationProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModificationProtectionConfig"]));
        modificationProtectionConfig = make_shared<UpdateLoadBalancerAttributeRequestModificationProtectionConfig>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerAttributeRequest() = default;
};
class UpdateLoadBalancerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateLoadBalancerAttributeResponseBody() {}

  explicit UpdateLoadBalancerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLoadBalancerAttributeResponseBody() = default;
};
class UpdateLoadBalancerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLoadBalancerAttributeResponseBody> body{};

  UpdateLoadBalancerAttributeResponse() {}

  explicit UpdateLoadBalancerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateLoadBalancerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerAttributeResponse() = default;
};
class UpdateLoadBalancerEditionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerEdition{};
  shared_ptr<string> loadBalancerId{};

  UpdateLoadBalancerEditionRequest() {}

  explicit UpdateLoadBalancerEditionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerEdition) {
      res["LoadBalancerEdition"] = boost::any(*loadBalancerEdition);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerEdition") != m.end() && !m["LoadBalancerEdition"].empty()) {
      loadBalancerEdition = make_shared<string>(boost::any_cast<string>(m["LoadBalancerEdition"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~UpdateLoadBalancerEditionRequest() = default;
};
class UpdateLoadBalancerEditionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLoadBalancerEditionResponseBody() {}

  explicit UpdateLoadBalancerEditionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLoadBalancerEditionResponseBody() = default;
};
class UpdateLoadBalancerEditionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLoadBalancerEditionResponseBody> body{};

  UpdateLoadBalancerEditionResponse() {}

  explicit UpdateLoadBalancerEditionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateLoadBalancerEditionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerEditionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerEditionResponse() = default;
};
class UpdateLoadBalancerZonesRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  UpdateLoadBalancerZonesRequestZoneMappings() {}

  explicit UpdateLoadBalancerZonesRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateLoadBalancerZonesRequestZoneMappings() = default;
};
class UpdateLoadBalancerZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<vector<UpdateLoadBalancerZonesRequestZoneMappings>> zoneMappings{};

  UpdateLoadBalancerZonesRequest() {}

  explicit UpdateLoadBalancerZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<UpdateLoadBalancerZonesRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateLoadBalancerZonesRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<UpdateLoadBalancerZonesRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~UpdateLoadBalancerZonesRequest() = default;
};
class UpdateLoadBalancerZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateLoadBalancerZonesResponseBody() {}

  explicit UpdateLoadBalancerZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLoadBalancerZonesResponseBody() = default;
};
class UpdateLoadBalancerZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLoadBalancerZonesResponseBody> body{};

  UpdateLoadBalancerZonesResponse() {}

  explicit UpdateLoadBalancerZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateLoadBalancerZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerZonesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerZonesResponse() = default;
};
class UpdateRuleAttributeRequestRuleActionsFixedResponseConfig : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> httpCode{};

  UpdateRuleAttributeRequestRuleActionsFixedResponseConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsFixedResponseConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsFixedResponseConfig() = default;
};
class UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<long> timeout{};

  UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession() {}

  explicit UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession() = default;
};
class UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class UpdateRuleAttributeRequestRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession{};
  shared_ptr<vector<UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  UpdateRuleAttributeRequestRuleActionsForwardGroupConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupStickySession) {
      res["ServerGroupStickySession"] = serverGroupStickySession ? boost::any(serverGroupStickySession->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupStickySession") != m.end() && !m["ServerGroupStickySession"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerGroupStickySession"].type()) {
        UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerGroupStickySession"]));
        serverGroupStickySession = make_shared<UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession>(model1);
      }
    }
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsForwardGroupConfig() = default;
};
class UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig() = default;
};
class UpdateRuleAttributeRequestRuleActionsRedirectConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> path{};
  shared_ptr<string> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> query{};

  UpdateRuleAttributeRequestRuleActionsRedirectConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsRedirectConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsRedirectConfig() = default;
};
class UpdateRuleAttributeRequestRuleActionsRewriteConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> path{};
  shared_ptr<string> query{};

  UpdateRuleAttributeRequestRuleActionsRewriteConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsRewriteConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsRewriteConfig() = default;
};
class UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig : public Darabonba::Model {
public:
  shared_ptr<long> QPS{};

  UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig() = default;
};
class UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() {}

  explicit UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() = default;
};
class UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples{};

  UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default;
};
class UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig> mirrorGroupConfig{};
  shared_ptr<string> targetType{};

  UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig() {}

  explicit UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mirrorGroupConfig) {
      res["MirrorGroupConfig"] = mirrorGroupConfig ? boost::any(mirrorGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MirrorGroupConfig") != m.end() && !m["MirrorGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MirrorGroupConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MirrorGroupConfig"]));
        mirrorGroupConfig = make_shared<UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig() = default;
};
class UpdateRuleAttributeRequestRuleActions : public Darabonba::Model {
public:
  shared_ptr<UpdateRuleAttributeRequestRuleActionsFixedResponseConfig> fixedResponseConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig> insertHeaderConfig{};
  shared_ptr<long> order{};
  shared_ptr<UpdateRuleAttributeRequestRuleActionsRedirectConfig> redirectConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleActionsRewriteConfig> rewriteConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig> trafficLimitConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig> trafficMirrorConfig{};
  shared_ptr<string> type{};

  UpdateRuleAttributeRequestRuleActions() {}

  explicit UpdateRuleAttributeRequestRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fixedResponseConfig) {
      res["FixedResponseConfig"] = fixedResponseConfig ? boost::any(fixedResponseConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (insertHeaderConfig) {
      res["InsertHeaderConfig"] = insertHeaderConfig ? boost::any(insertHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (redirectConfig) {
      res["RedirectConfig"] = redirectConfig ? boost::any(redirectConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rewriteConfig) {
      res["RewriteConfig"] = rewriteConfig ? boost::any(rewriteConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficLimitConfig) {
      res["TrafficLimitConfig"] = trafficLimitConfig ? boost::any(trafficLimitConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficMirrorConfig) {
      res["TrafficMirrorConfig"] = trafficMirrorConfig ? boost::any(trafficMirrorConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FixedResponseConfig") != m.end() && !m["FixedResponseConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FixedResponseConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsFixedResponseConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FixedResponseConfig"]));
        fixedResponseConfig = make_shared<UpdateRuleAttributeRequestRuleActionsFixedResponseConfig>(model1);
      }
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<UpdateRuleAttributeRequestRuleActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("InsertHeaderConfig") != m.end() && !m["InsertHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InsertHeaderConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InsertHeaderConfig"]));
        insertHeaderConfig = make_shared<UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RedirectConfig") != m.end() && !m["RedirectConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsRedirectConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectConfig"]));
        redirectConfig = make_shared<UpdateRuleAttributeRequestRuleActionsRedirectConfig>(model1);
      }
    }
    if (m.find("RewriteConfig") != m.end() && !m["RewriteConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RewriteConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsRewriteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RewriteConfig"]));
        rewriteConfig = make_shared<UpdateRuleAttributeRequestRuleActionsRewriteConfig>(model1);
      }
    }
    if (m.find("TrafficLimitConfig") != m.end() && !m["TrafficLimitConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficLimitConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficLimitConfig"]));
        trafficLimitConfig = make_shared<UpdateRuleAttributeRequestRuleActionsTrafficLimitConfig>(model1);
      }
    }
    if (m.find("TrafficMirrorConfig") != m.end() && !m["TrafficMirrorConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficMirrorConfig"].type()) {
        UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficMirrorConfig"]));
        trafficMirrorConfig = make_shared<UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleActions() = default;
};
class UpdateRuleAttributeRequestRuleConditionsCookieConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateRuleAttributeRequestRuleConditionsCookieConfigValues() {}

  explicit UpdateRuleAttributeRequestRuleConditionsCookieConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsCookieConfigValues() = default;
};
class UpdateRuleAttributeRequestRuleConditionsCookieConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRuleAttributeRequestRuleConditionsCookieConfigValues>> values{};

  UpdateRuleAttributeRequestRuleConditionsCookieConfig() {}

  explicit UpdateRuleAttributeRequestRuleConditionsCookieConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<UpdateRuleAttributeRequestRuleConditionsCookieConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRuleAttributeRequestRuleConditionsCookieConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<UpdateRuleAttributeRequestRuleConditionsCookieConfigValues>>(expect1);
      }
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsCookieConfig() = default;
};
class UpdateRuleAttributeRequestRuleConditionsHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  UpdateRuleAttributeRequestRuleConditionsHeaderConfig() {}

  explicit UpdateRuleAttributeRequestRuleConditionsHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsHeaderConfig() = default;
};
class UpdateRuleAttributeRequestRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRuleAttributeRequestRuleConditionsHostConfig() {}

  explicit UpdateRuleAttributeRequestRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsHostConfig() = default;
};
class UpdateRuleAttributeRequestRuleConditionsMethodConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRuleAttributeRequestRuleConditionsMethodConfig() {}

  explicit UpdateRuleAttributeRequestRuleConditionsMethodConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsMethodConfig() = default;
};
class UpdateRuleAttributeRequestRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRuleAttributeRequestRuleConditionsPathConfig() {}

  explicit UpdateRuleAttributeRequestRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsPathConfig() = default;
};
class UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues() {}

  explicit UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues() = default;
};
class UpdateRuleAttributeRequestRuleConditionsQueryStringConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues>> values{};

  UpdateRuleAttributeRequestRuleConditionsQueryStringConfig() {}

  explicit UpdateRuleAttributeRequestRuleConditionsQueryStringConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues>>(expect1);
      }
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsQueryStringConfig() = default;
};
class UpdateRuleAttributeRequestRuleConditionsSourceIpConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRuleAttributeRequestRuleConditionsSourceIpConfig() {}

  explicit UpdateRuleAttributeRequestRuleConditionsSourceIpConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditionsSourceIpConfig() = default;
};
class UpdateRuleAttributeRequestRuleConditions : public Darabonba::Model {
public:
  shared_ptr<UpdateRuleAttributeRequestRuleConditionsCookieConfig> cookieConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleConditionsHeaderConfig> headerConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleConditionsHostConfig> hostConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleConditionsMethodConfig> methodConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleConditionsPathConfig> pathConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleConditionsQueryStringConfig> queryStringConfig{};
  shared_ptr<UpdateRuleAttributeRequestRuleConditionsSourceIpConfig> sourceIpConfig{};
  shared_ptr<string> type{};

  UpdateRuleAttributeRequestRuleConditions() {}

  explicit UpdateRuleAttributeRequestRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookieConfig) {
      res["CookieConfig"] = cookieConfig ? boost::any(cookieConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headerConfig) {
      res["HeaderConfig"] = headerConfig ? boost::any(headerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (methodConfig) {
      res["MethodConfig"] = methodConfig ? boost::any(methodConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryStringConfig) {
      res["QueryStringConfig"] = queryStringConfig ? boost::any(queryStringConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceIpConfig) {
      res["SourceIpConfig"] = sourceIpConfig ? boost::any(sourceIpConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CookieConfig") != m.end() && !m["CookieConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CookieConfig"].type()) {
        UpdateRuleAttributeRequestRuleConditionsCookieConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CookieConfig"]));
        cookieConfig = make_shared<UpdateRuleAttributeRequestRuleConditionsCookieConfig>(model1);
      }
    }
    if (m.find("HeaderConfig") != m.end() && !m["HeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeaderConfig"].type()) {
        UpdateRuleAttributeRequestRuleConditionsHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeaderConfig"]));
        headerConfig = make_shared<UpdateRuleAttributeRequestRuleConditionsHeaderConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        UpdateRuleAttributeRequestRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<UpdateRuleAttributeRequestRuleConditionsHostConfig>(model1);
      }
    }
    if (m.find("MethodConfig") != m.end() && !m["MethodConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MethodConfig"].type()) {
        UpdateRuleAttributeRequestRuleConditionsMethodConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MethodConfig"]));
        methodConfig = make_shared<UpdateRuleAttributeRequestRuleConditionsMethodConfig>(model1);
      }
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        UpdateRuleAttributeRequestRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<UpdateRuleAttributeRequestRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("QueryStringConfig") != m.end() && !m["QueryStringConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueryStringConfig"].type()) {
        UpdateRuleAttributeRequestRuleConditionsQueryStringConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueryStringConfig"]));
        queryStringConfig = make_shared<UpdateRuleAttributeRequestRuleConditionsQueryStringConfig>(model1);
      }
    }
    if (m.find("SourceIpConfig") != m.end() && !m["SourceIpConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceIpConfig"].type()) {
        UpdateRuleAttributeRequestRuleConditionsSourceIpConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceIpConfig"]));
        sourceIpConfig = make_shared<UpdateRuleAttributeRequestRuleConditionsSourceIpConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateRuleAttributeRequestRuleConditions() = default;
};
class UpdateRuleAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> priority{};
  shared_ptr<vector<UpdateRuleAttributeRequestRuleActions>> ruleActions{};
  shared_ptr<vector<UpdateRuleAttributeRequestRuleConditions>> ruleConditions{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};

  UpdateRuleAttributeRequest() {}

  explicit UpdateRuleAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<UpdateRuleAttributeRequestRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRuleAttributeRequestRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<UpdateRuleAttributeRequestRuleActions>>(expect1);
      }
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<UpdateRuleAttributeRequestRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRuleAttributeRequestRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<UpdateRuleAttributeRequestRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~UpdateRuleAttributeRequest() = default;
};
class UpdateRuleAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateRuleAttributeResponseBody() {}

  explicit UpdateRuleAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRuleAttributeResponseBody() = default;
};
class UpdateRuleAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRuleAttributeResponseBody> body{};

  UpdateRuleAttributeResponse() {}

  explicit UpdateRuleAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRuleAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRuleAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRuleAttributeResponse() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> httpCode{};

  UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<long> timeout{};

  UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};
  shared_ptr<long> weight{};

  UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession{};
  shared_ptr<vector<UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupStickySession) {
      res["ServerGroupStickySession"] = serverGroupStickySession ? boost::any(serverGroupStickySession->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupStickySession") != m.end() && !m["ServerGroupStickySession"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerGroupStickySession"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerGroupStickySession"]));
        serverGroupStickySession = make_shared<UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession>(model1);
      }
    }
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<bool> coverEnabled{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverEnabled) {
      res["CoverEnabled"] = boost::any(*coverEnabled);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverEnabled") != m.end() && !m["CoverEnabled"].empty()) {
      coverEnabled = make_shared<bool>(boost::any_cast<bool>(m["CoverEnabled"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> path{};
  shared_ptr<string> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> query{};

  UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> path{};
  shared_ptr<string> query{};

  UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig : public Darabonba::Model {
public:
  shared_ptr<long> QPS{};

  UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> serverGroupId{};

  UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples{};

  UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig> mirrorGroupConfig{};
  shared_ptr<string> targetType{};

  UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mirrorGroupConfig) {
      res["MirrorGroupConfig"] = mirrorGroupConfig ? boost::any(mirrorGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MirrorGroupConfig") != m.end() && !m["MirrorGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MirrorGroupConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MirrorGroupConfig"]));
        mirrorGroupConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleActions : public Darabonba::Model {
public:
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig> fixedResponseConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig> forwardGroupConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig> insertHeaderConfig{};
  shared_ptr<long> order{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig> redirectConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig> removeHeaderConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig> rewriteConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig> trafficLimitConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig> trafficMirrorConfig{};
  shared_ptr<string> type{};

  UpdateRulesAttributeRequestRulesRuleActions() {}

  explicit UpdateRulesAttributeRequestRulesRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fixedResponseConfig) {
      res["FixedResponseConfig"] = fixedResponseConfig ? boost::any(fixedResponseConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (insertHeaderConfig) {
      res["InsertHeaderConfig"] = insertHeaderConfig ? boost::any(insertHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (redirectConfig) {
      res["RedirectConfig"] = redirectConfig ? boost::any(redirectConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (removeHeaderConfig) {
      res["RemoveHeaderConfig"] = removeHeaderConfig ? boost::any(removeHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rewriteConfig) {
      res["RewriteConfig"] = rewriteConfig ? boost::any(rewriteConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficLimitConfig) {
      res["TrafficLimitConfig"] = trafficLimitConfig ? boost::any(trafficLimitConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficMirrorConfig) {
      res["TrafficMirrorConfig"] = trafficMirrorConfig ? boost::any(trafficMirrorConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FixedResponseConfig") != m.end() && !m["FixedResponseConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FixedResponseConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FixedResponseConfig"]));
        fixedResponseConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig>(model1);
      }
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig>(model1);
      }
    }
    if (m.find("InsertHeaderConfig") != m.end() && !m["InsertHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InsertHeaderConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InsertHeaderConfig"]));
        insertHeaderConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RedirectConfig") != m.end() && !m["RedirectConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectConfig"]));
        redirectConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsRedirectConfig>(model1);
      }
    }
    if (m.find("RemoveHeaderConfig") != m.end() && !m["RemoveHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemoveHeaderConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemoveHeaderConfig"]));
        removeHeaderConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsRemoveHeaderConfig>(model1);
      }
    }
    if (m.find("RewriteConfig") != m.end() && !m["RewriteConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RewriteConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RewriteConfig"]));
        rewriteConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig>(model1);
      }
    }
    if (m.find("TrafficLimitConfig") != m.end() && !m["TrafficLimitConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficLimitConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficLimitConfig"]));
        trafficLimitConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsTrafficLimitConfig>(model1);
      }
    }
    if (m.find("TrafficMirrorConfig") != m.end() && !m["TrafficMirrorConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficMirrorConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficMirrorConfig"]));
        trafficMirrorConfig = make_shared<UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleActions() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues>>(expect1);
      }
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsHostConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsHostConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsPathConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsPathConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfigValues>>(expect1);
      }
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig() = default;
};
class UpdateRulesAttributeRequestRulesRuleConditions : public Darabonba::Model {
public:
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig> cookieConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig> headerConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsHostConfig> hostConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig> methodConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsPathConfig> pathConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig> queryStringConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig> responseHeaderConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig> responseStatusCodeConfig{};
  shared_ptr<UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig> sourceIpConfig{};
  shared_ptr<string> type{};

  UpdateRulesAttributeRequestRulesRuleConditions() {}

  explicit UpdateRulesAttributeRequestRulesRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookieConfig) {
      res["CookieConfig"] = cookieConfig ? boost::any(cookieConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headerConfig) {
      res["HeaderConfig"] = headerConfig ? boost::any(headerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (methodConfig) {
      res["MethodConfig"] = methodConfig ? boost::any(methodConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryStringConfig) {
      res["QueryStringConfig"] = queryStringConfig ? boost::any(queryStringConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseHeaderConfig) {
      res["ResponseHeaderConfig"] = responseHeaderConfig ? boost::any(responseHeaderConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseStatusCodeConfig) {
      res["ResponseStatusCodeConfig"] = responseStatusCodeConfig ? boost::any(responseStatusCodeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceIpConfig) {
      res["SourceIpConfig"] = sourceIpConfig ? boost::any(sourceIpConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CookieConfig") != m.end() && !m["CookieConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CookieConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CookieConfig"]));
        cookieConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig>(model1);
      }
    }
    if (m.find("HeaderConfig") != m.end() && !m["HeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeaderConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeaderConfig"]));
        headerConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsHostConfig>(model1);
      }
    }
    if (m.find("MethodConfig") != m.end() && !m["MethodConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MethodConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MethodConfig"]));
        methodConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig>(model1);
      }
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("QueryStringConfig") != m.end() && !m["QueryStringConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueryStringConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueryStringConfig"]));
        queryStringConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig>(model1);
      }
    }
    if (m.find("ResponseHeaderConfig") != m.end() && !m["ResponseHeaderConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResponseHeaderConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResponseHeaderConfig"]));
        responseHeaderConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig>(model1);
      }
    }
    if (m.find("ResponseStatusCodeConfig") != m.end() && !m["ResponseStatusCodeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResponseStatusCodeConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResponseStatusCodeConfig"]));
        responseStatusCodeConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig>(model1);
      }
    }
    if (m.find("SourceIpConfig") != m.end() && !m["SourceIpConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceIpConfig"].type()) {
        UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceIpConfig"]));
        sourceIpConfig = make_shared<UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRulesRuleConditions() = default;
};
class UpdateRulesAttributeRequestRules : public Darabonba::Model {
public:
  shared_ptr<long> priority{};
  shared_ptr<vector<UpdateRulesAttributeRequestRulesRuleActions>> ruleActions{};
  shared_ptr<vector<UpdateRulesAttributeRequestRulesRuleConditions>> ruleConditions{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};

  UpdateRulesAttributeRequestRules() {}

  explicit UpdateRulesAttributeRequestRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<UpdateRulesAttributeRequestRulesRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRulesAttributeRequestRulesRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<UpdateRulesAttributeRequestRulesRuleActions>>(expect1);
      }
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<UpdateRulesAttributeRequestRulesRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRulesAttributeRequestRulesRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<UpdateRulesAttributeRequestRulesRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~UpdateRulesAttributeRequestRules() = default;
};
class UpdateRulesAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<UpdateRulesAttributeRequestRules>> rules{};

  UpdateRulesAttributeRequest() {}

  explicit UpdateRulesAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<UpdateRulesAttributeRequestRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRulesAttributeRequestRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<UpdateRulesAttributeRequestRules>>(expect1);
      }
    }
  }


  virtual ~UpdateRulesAttributeRequest() = default;
};
class UpdateRulesAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateRulesAttributeResponseBody() {}

  explicit UpdateRulesAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRulesAttributeResponseBody() = default;
};
class UpdateRulesAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRulesAttributeResponseBody> body{};

  UpdateRulesAttributeResponse() {}

  explicit UpdateRulesAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRulesAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRulesAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRulesAttributeResponse() = default;
};
class UpdateSecurityPolicyAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ciphers{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> securityPolicyName{};
  shared_ptr<vector<string>> TLSVersions{};

  UpdateSecurityPolicyAttributeRequest() {}

  explicit UpdateSecurityPolicyAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (securityPolicyName) {
      res["SecurityPolicyName"] = boost::any(*securityPolicyName);
    }
    if (TLSVersions) {
      res["TLSVersions"] = boost::any(*TLSVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("SecurityPolicyName") != m.end() && !m["SecurityPolicyName"].empty()) {
      securityPolicyName = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyName"]));
    }
    if (m.find("TLSVersions") != m.end() && !m["TLSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TLSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TLSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      TLSVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateSecurityPolicyAttributeRequest() = default;
};
class UpdateSecurityPolicyAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateSecurityPolicyAttributeResponseBody() {}

  explicit UpdateSecurityPolicyAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSecurityPolicyAttributeResponseBody() = default;
};
class UpdateSecurityPolicyAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSecurityPolicyAttributeResponseBody> body{};

  UpdateSecurityPolicyAttributeResponse() {}

  explicit UpdateSecurityPolicyAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSecurityPolicyAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSecurityPolicyAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSecurityPolicyAttributeResponse() = default;
};
class UpdateServerGroupAttributeRequestHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> healthCheckCodes{};
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<string> healthCheckHost{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckMethod{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> healthCheckTimeout{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};

  UpdateServerGroupAttributeRequestHealthCheckConfig() {}

  explicit UpdateServerGroupAttributeRequestHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckCodes) {
      res["HealthCheckCodes"] = boost::any(*healthCheckCodes);
    }
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckHost) {
      res["HealthCheckHost"] = boost::any(*healthCheckHost);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckMethod) {
      res["HealthCheckMethod"] = boost::any(*healthCheckMethod);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckTimeout) {
      res["HealthCheckTimeout"] = boost::any(*healthCheckTimeout);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckCodes") != m.end() && !m["HealthCheckCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckHost") != m.end() && !m["HealthCheckHost"].empty()) {
      healthCheckHost = make_shared<string>(boost::any_cast<string>(m["HealthCheckHost"]));
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckMethod") != m.end() && !m["HealthCheckMethod"].empty()) {
      healthCheckMethod = make_shared<string>(boost::any_cast<string>(m["HealthCheckMethod"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckTimeout") != m.end() && !m["HealthCheckTimeout"].empty()) {
      healthCheckTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckTimeout"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~UpdateServerGroupAttributeRequestHealthCheckConfig() = default;
};
class UpdateServerGroupAttributeRequestStickySessionConfig : public Darabonba::Model {
public:
  shared_ptr<string> cookie{};
  shared_ptr<long> cookieTimeout{};
  shared_ptr<bool> stickySessionEnabled{};
  shared_ptr<string> stickySessionType{};

  UpdateServerGroupAttributeRequestStickySessionConfig() {}

  explicit UpdateServerGroupAttributeRequestStickySessionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cookie) {
      res["Cookie"] = boost::any(*cookie);
    }
    if (cookieTimeout) {
      res["CookieTimeout"] = boost::any(*cookieTimeout);
    }
    if (stickySessionEnabled) {
      res["StickySessionEnabled"] = boost::any(*stickySessionEnabled);
    }
    if (stickySessionType) {
      res["StickySessionType"] = boost::any(*stickySessionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cookie") != m.end() && !m["Cookie"].empty()) {
      cookie = make_shared<string>(boost::any_cast<string>(m["Cookie"]));
    }
    if (m.find("CookieTimeout") != m.end() && !m["CookieTimeout"].empty()) {
      cookieTimeout = make_shared<long>(boost::any_cast<long>(m["CookieTimeout"]));
    }
    if (m.find("StickySessionEnabled") != m.end() && !m["StickySessionEnabled"].empty()) {
      stickySessionEnabled = make_shared<bool>(boost::any_cast<bool>(m["StickySessionEnabled"]));
    }
    if (m.find("StickySessionType") != m.end() && !m["StickySessionType"].empty()) {
      stickySessionType = make_shared<string>(boost::any_cast<string>(m["StickySessionType"]));
    }
  }


  virtual ~UpdateServerGroupAttributeRequestStickySessionConfig() = default;
};
class UpdateServerGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<UpdateServerGroupAttributeRequestHealthCheckConfig> healthCheckConfig{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> serverGroupName{};
  shared_ptr<string> serviceName{};
  shared_ptr<UpdateServerGroupAttributeRequestStickySessionConfig> stickySessionConfig{};

  UpdateServerGroupAttributeRequest() {}

  explicit UpdateServerGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverGroupName) {
      res["ServerGroupName"] = boost::any(*serverGroupName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (stickySessionConfig) {
      res["StickySessionConfig"] = stickySessionConfig ? boost::any(stickySessionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckConfig") != m.end() && !m["HealthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheckConfig"].type()) {
        UpdateServerGroupAttributeRequestHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheckConfig"]));
        healthCheckConfig = make_shared<UpdateServerGroupAttributeRequestHealthCheckConfig>(model1);
      }
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerGroupName") != m.end() && !m["ServerGroupName"].empty()) {
      serverGroupName = make_shared<string>(boost::any_cast<string>(m["ServerGroupName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StickySessionConfig") != m.end() && !m["StickySessionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["StickySessionConfig"].type()) {
        UpdateServerGroupAttributeRequestStickySessionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StickySessionConfig"]));
        stickySessionConfig = make_shared<UpdateServerGroupAttributeRequestStickySessionConfig>(model1);
      }
    }
  }


  virtual ~UpdateServerGroupAttributeRequest() = default;
};
class UpdateServerGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateServerGroupAttributeResponseBody() {}

  explicit UpdateServerGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServerGroupAttributeResponseBody() = default;
};
class UpdateServerGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServerGroupAttributeResponseBody> body{};

  UpdateServerGroupAttributeResponse() {}

  explicit UpdateServerGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServerGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServerGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServerGroupAttributeResponse() = default;
};
class UpdateServerGroupServersAttributeRequestServers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<long> weight{};

  UpdateServerGroupServersAttributeRequestServers() {}

  explicit UpdateServerGroupServersAttributeRequestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~UpdateServerGroupServersAttributeRequestServers() = default;
};
class UpdateServerGroupServersAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<UpdateServerGroupServersAttributeRequestServers>> servers{};

  UpdateServerGroupServersAttributeRequest() {}

  explicit UpdateServerGroupServersAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<UpdateServerGroupServersAttributeRequestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServerGroupServersAttributeRequestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<UpdateServerGroupServersAttributeRequestServers>>(expect1);
      }
    }
  }


  virtual ~UpdateServerGroupServersAttributeRequest() = default;
};
class UpdateServerGroupServersAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateServerGroupServersAttributeResponseBody() {}

  explicit UpdateServerGroupServersAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServerGroupServersAttributeResponseBody() = default;
};
class UpdateServerGroupServersAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServerGroupServersAttributeResponseBody> body{};

  UpdateServerGroupServersAttributeResponse() {}

  explicit UpdateServerGroupServersAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServerGroupServersAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServerGroupServersAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServerGroupServersAttributeResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AddEntriesToAclResponse addEntriesToAclWithOptions(shared_ptr<AddEntriesToAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEntriesToAclResponse addEntriesToAcl(shared_ptr<AddEntriesToAclRequest> request);
  AddServersToServerGroupResponse addServersToServerGroupWithOptions(shared_ptr<AddServersToServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddServersToServerGroupResponse addServersToServerGroup(shared_ptr<AddServersToServerGroupRequest> request);
  ApplyHealthCheckTemplateToServerGroupResponse applyHealthCheckTemplateToServerGroupWithOptions(shared_ptr<ApplyHealthCheckTemplateToServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyHealthCheckTemplateToServerGroupResponse applyHealthCheckTemplateToServerGroup(shared_ptr<ApplyHealthCheckTemplateToServerGroupRequest> request);
  AssociateAclsWithListenerResponse associateAclsWithListenerWithOptions(shared_ptr<AssociateAclsWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateAclsWithListenerResponse associateAclsWithListener(shared_ptr<AssociateAclsWithListenerRequest> request);
  AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request);
  AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancerWithOptions(shared_ptr<AttachCommonBandwidthPackageToLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancer(shared_ptr<AttachCommonBandwidthPackageToLoadBalancerRequest> request);
  CreateAclResponse createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAclResponse createAcl(shared_ptr<CreateAclRequest> request);
  CreateHealthCheckTemplateResponse createHealthCheckTemplateWithOptions(shared_ptr<CreateHealthCheckTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHealthCheckTemplateResponse createHealthCheckTemplate(shared_ptr<CreateHealthCheckTemplateRequest> request);
  CreateListenerResponse createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateListenerResponse createListener(shared_ptr<CreateListenerRequest> request);
  CreateLoadBalancerResponse createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerResponse createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request);
  CreateRuleResponse createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateRulesResponse createRulesWithOptions(shared_ptr<CreateRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRulesResponse createRules(shared_ptr<CreateRulesRequest> request);
  CreateSecurityPolicyResponse createSecurityPolicyWithOptions(shared_ptr<CreateSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecurityPolicyResponse createSecurityPolicy(shared_ptr<CreateSecurityPolicyRequest> request);
  CreateServerGroupResponse createServerGroupWithOptions(shared_ptr<CreateServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServerGroupResponse createServerGroup(shared_ptr<CreateServerGroupRequest> request);
  DeleteAclResponse deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAclResponse deleteAcl(shared_ptr<DeleteAclRequest> request);
  DeleteHealthCheckTemplatesResponse deleteHealthCheckTemplatesWithOptions(shared_ptr<DeleteHealthCheckTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHealthCheckTemplatesResponse deleteHealthCheckTemplates(shared_ptr<DeleteHealthCheckTemplatesRequest> request);
  DeleteListenerResponse deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteListenerResponse deleteListener(shared_ptr<DeleteListenerRequest> request);
  DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoadBalancerResponse deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request);
  DeleteRuleResponse deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleResponse deleteRule(shared_ptr<DeleteRuleRequest> request);
  DeleteRulesResponse deleteRulesWithOptions(shared_ptr<DeleteRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRulesResponse deleteRules(shared_ptr<DeleteRulesRequest> request);
  DeleteSecurityPolicyResponse deleteSecurityPolicyWithOptions(shared_ptr<DeleteSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecurityPolicyResponse deleteSecurityPolicy(shared_ptr<DeleteSecurityPolicyRequest> request);
  DeleteServerGroupResponse deleteServerGroupWithOptions(shared_ptr<DeleteServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServerGroupResponse deleteServerGroup(shared_ptr<DeleteServerGroupRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones();
  DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancerWithOptions(shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancer(shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerRequest> request);
  DisableDeletionProtectionResponse disableDeletionProtectionWithOptions(shared_ptr<DisableDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableDeletionProtectionResponse disableDeletionProtection(shared_ptr<DisableDeletionProtectionRequest> request);
  DisableLoadBalancerAccessLogResponse disableLoadBalancerAccessLogWithOptions(shared_ptr<DisableLoadBalancerAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableLoadBalancerAccessLogResponse disableLoadBalancerAccessLog(shared_ptr<DisableLoadBalancerAccessLogRequest> request);
  DissociateAclsFromListenerResponse dissociateAclsFromListenerWithOptions(shared_ptr<DissociateAclsFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateAclsFromListenerResponse dissociateAclsFromListener(shared_ptr<DissociateAclsFromListenerRequest> request);
  DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListenerWithOptions(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListener(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request);
  EnableDeletionProtectionResponse enableDeletionProtectionWithOptions(shared_ptr<EnableDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableDeletionProtectionResponse enableDeletionProtection(shared_ptr<EnableDeletionProtectionRequest> request);
  EnableLoadBalancerAccessLogResponse enableLoadBalancerAccessLogWithOptions(shared_ptr<EnableLoadBalancerAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableLoadBalancerAccessLogResponse enableLoadBalancerAccessLog(shared_ptr<EnableLoadBalancerAccessLogRequest> request);
  GetHealthCheckTemplateAttributeResponse getHealthCheckTemplateAttributeWithOptions(shared_ptr<GetHealthCheckTemplateAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHealthCheckTemplateAttributeResponse getHealthCheckTemplateAttribute(shared_ptr<GetHealthCheckTemplateAttributeRequest> request);
  GetListenerAttributeResponse getListenerAttributeWithOptions(shared_ptr<GetListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetListenerAttributeResponse getListenerAttribute(shared_ptr<GetListenerAttributeRequest> request);
  GetListenerHealthStatusResponse getListenerHealthStatusWithOptions(shared_ptr<GetListenerHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetListenerHealthStatusResponse getListenerHealthStatus(shared_ptr<GetListenerHealthStatusRequest> request);
  GetLoadBalancerAttributeResponse getLoadBalancerAttributeWithOptions(shared_ptr<GetLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoadBalancerAttributeResponse getLoadBalancerAttribute(shared_ptr<GetLoadBalancerAttributeRequest> request);
  ListAclEntriesResponse listAclEntriesWithOptions(shared_ptr<ListAclEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAclEntriesResponse listAclEntries(shared_ptr<ListAclEntriesRequest> request);
  ListAclRelationsResponse listAclRelationsWithOptions(shared_ptr<ListAclRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAclRelationsResponse listAclRelations(shared_ptr<ListAclRelationsRequest> request);
  ListAclsResponse listAclsWithOptions(shared_ptr<ListAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAclsResponse listAcls(shared_ptr<ListAclsRequest> request);
  ListAsynJobsResponse listAsynJobsWithOptions(shared_ptr<ListAsynJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAsynJobsResponse listAsynJobs(shared_ptr<ListAsynJobsRequest> request);
  ListHealthCheckTemplatesResponse listHealthCheckTemplatesWithOptions(shared_ptr<ListHealthCheckTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHealthCheckTemplatesResponse listHealthCheckTemplates(shared_ptr<ListHealthCheckTemplatesRequest> request);
  ListListenerCertificatesResponse listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenerCertificatesResponse listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request);
  ListListenersResponse listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersResponse listListeners(shared_ptr<ListListenersRequest> request);
  ListLoadBalancersResponse listLoadBalancersWithOptions(shared_ptr<ListLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLoadBalancersResponse listLoadBalancers(shared_ptr<ListLoadBalancersRequest> request);
  ListRulesResponse listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<ListRulesRequest> request);
  ListSecurityPoliciesResponse listSecurityPoliciesWithOptions(shared_ptr<ListSecurityPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecurityPoliciesResponse listSecurityPolicies(shared_ptr<ListSecurityPoliciesRequest> request);
  ListSecurityPolicyRelationsResponse listSecurityPolicyRelationsWithOptions(shared_ptr<ListSecurityPolicyRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecurityPolicyRelationsResponse listSecurityPolicyRelations(shared_ptr<ListSecurityPolicyRelationsRequest> request);
  ListServerGroupServersResponse listServerGroupServersWithOptions(shared_ptr<ListServerGroupServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerGroupServersResponse listServerGroupServers(shared_ptr<ListServerGroupServersRequest> request);
  ListServerGroupsResponse listServerGroupsWithOptions(shared_ptr<ListServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerGroupsResponse listServerGroups(shared_ptr<ListServerGroupsRequest> request);
  ListSystemSecurityPoliciesResponse listSystemSecurityPoliciesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSystemSecurityPoliciesResponse listSystemSecurityPolicies();
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  RemoveEntriesFromAclResponse removeEntriesFromAclWithOptions(shared_ptr<RemoveEntriesFromAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveEntriesFromAclResponse removeEntriesFromAcl(shared_ptr<RemoveEntriesFromAclRequest> request);
  RemoveServersFromServerGroupResponse removeServersFromServerGroupWithOptions(shared_ptr<RemoveServersFromServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveServersFromServerGroupResponse removeServersFromServerGroup(shared_ptr<RemoveServersFromServerGroupRequest> request);
  ReplaceServersInServerGroupResponse replaceServersInServerGroupWithOptions(shared_ptr<ReplaceServersInServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceServersInServerGroupResponse replaceServersInServerGroup(shared_ptr<ReplaceServersInServerGroupRequest> request);
  StartListenerResponse startListenerWithOptions(shared_ptr<StartListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartListenerResponse startListener(shared_ptr<StartListenerRequest> request);
  StopListenerResponse stopListenerWithOptions(shared_ptr<StopListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopListenerResponse stopListener(shared_ptr<StopListenerRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnTagResourcesResponse unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnTagResourcesResponse unTagResources(shared_ptr<UnTagResourcesRequest> request);
  UpdateAclAttributeResponse updateAclAttributeWithOptions(shared_ptr<UpdateAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAclAttributeResponse updateAclAttribute(shared_ptr<UpdateAclAttributeRequest> request);
  UpdateHealthCheckTemplateAttributeResponse updateHealthCheckTemplateAttributeWithOptions(shared_ptr<UpdateHealthCheckTemplateAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHealthCheckTemplateAttributeResponse updateHealthCheckTemplateAttribute(shared_ptr<UpdateHealthCheckTemplateAttributeRequest> request);
  UpdateListenerAttributeResponse updateListenerAttributeWithOptions(shared_ptr<UpdateListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateListenerAttributeResponse updateListenerAttribute(shared_ptr<UpdateListenerAttributeRequest> request);
  UpdateListenerLogConfigResponse updateListenerLogConfigWithOptions(shared_ptr<UpdateListenerLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateListenerLogConfigResponse updateListenerLogConfig(shared_ptr<UpdateListenerLogConfigRequest> request);
  UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfigWithOptions(shared_ptr<UpdateLoadBalancerAddressTypeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfig(shared_ptr<UpdateLoadBalancerAddressTypeConfigRequest> request);
  UpdateLoadBalancerAttributeResponse updateLoadBalancerAttributeWithOptions(shared_ptr<UpdateLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerAttributeResponse updateLoadBalancerAttribute(shared_ptr<UpdateLoadBalancerAttributeRequest> request);
  UpdateLoadBalancerEditionResponse updateLoadBalancerEditionWithOptions(shared_ptr<UpdateLoadBalancerEditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerEditionResponse updateLoadBalancerEdition(shared_ptr<UpdateLoadBalancerEditionRequest> request);
  UpdateLoadBalancerZonesResponse updateLoadBalancerZonesWithOptions(shared_ptr<UpdateLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerZonesResponse updateLoadBalancerZones(shared_ptr<UpdateLoadBalancerZonesRequest> request);
  UpdateRuleAttributeResponse updateRuleAttributeWithOptions(shared_ptr<UpdateRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRuleAttributeResponse updateRuleAttribute(shared_ptr<UpdateRuleAttributeRequest> request);
  UpdateRulesAttributeResponse updateRulesAttributeWithOptions(shared_ptr<UpdateRulesAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRulesAttributeResponse updateRulesAttribute(shared_ptr<UpdateRulesAttributeRequest> request);
  UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttributeWithOptions(shared_ptr<UpdateSecurityPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttribute(shared_ptr<UpdateSecurityPolicyAttributeRequest> request);
  UpdateServerGroupAttributeResponse updateServerGroupAttributeWithOptions(shared_ptr<UpdateServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServerGroupAttributeResponse updateServerGroupAttribute(shared_ptr<UpdateServerGroupAttributeRequest> request);
  UpdateServerGroupServersAttributeResponse updateServerGroupServersAttributeWithOptions(shared_ptr<UpdateServerGroupServersAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServerGroupServersAttributeResponse updateServerGroupServersAttribute(shared_ptr<UpdateServerGroupServersAttributeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alb20200616

#endif
